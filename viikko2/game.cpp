#include <iostream>
#include "game.h"

game::game() {
    std::cout << "[DEBUG] game kutsuttu\n";
    maxNumber = 0;
    randomNumber = 0;
    playerGuess = 0;
    numOfGuesses = 0;
}

void game::setMaxNumber(int max) {
    std::cout << "[DEBUG] setMaxNumber(" << max << ")\n";
    maxNumber = max;
}

void game::setRandomNumber(int number) {
    std::cout << "[DEBUG] setrandomNumber(" << number << ")\n";
    randomNumber = number;
}

void game::setPlayerGuess(int guess) {
    std::cout << "[DEBUG] setplayerGuess(" << guess << ")\n";
    playerGuess = guess;
}

void game::setNumOfGuesses(int n) {
    std::cout << "[DEBUG] setNumOfGuesses(" << n << ")\n";
    numOfGuesses = n;
}

void game::addNumOfGuesses(int n) {
    std::cout << "[DEBUG] addNumOfGuesses(+" << n << ")\n";
    numOfGuesses += n;
}

int game::getMaxNumber() const {
    std::cout << "[DEBUG] getMaxnumber() -> " << maxNumber << "\n";
    return maxNumber;
}

int game::getRandomNumber() const {
    std::cout << "[DEBUG] getrandomNumber() -> " << randomNumber << "\n";
    return randomNumber;
}

int game::getPlayerGuess() const {
    std::cout << "[DEBUG] getplayerGuess() -> " << playerGuess << "\n";
    return playerGuess;
}

int game::getNumOfGuesses() const {
    std::cout << "[DEBUG] getNumOfGuesses() -> " << numOfGuesses << "\n";
    return numOfGuesses;
}
