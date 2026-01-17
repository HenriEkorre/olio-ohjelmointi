#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"


int main() {
    game newGame;
    std::srand(time(nullptr));

    newGame.setMaxNumber(std::rand() % 51 + 20);

    newGame.setRandomNumber(std::rand() % newGame.getMaxNumber() + 1);

    bool won = false;
    newGame.setNumOfGuesses(0);

    while (!won) {
        int guess;
        std::cout << "\nArvaa: ";
        std::cin >> guess;
        newGame.setPlayerGuess(guess);

        if (newGame.getPlayerGuess() == newGame.getRandomNumber()) {
            won = true;
        } else if (newGame.getPlayerGuess() > newGame.getRandomNumber()) {
            std::cout << "Arvauksesi on suurempi kuin vastaus\n";
        } else {
            std::cout << "Arvauksesi on pienempi kuin vastaus\n";
        }

        if (!won)
            newGame.addNumOfGuesses(1);
    }


    std::cout << "\nArvasit oikein!"
              << "\nArvauksia: " << newGame.getNumOfGuesses();
}
