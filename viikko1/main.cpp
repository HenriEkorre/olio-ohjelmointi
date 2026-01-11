#include <iostream>
#include <cstdlib>



int game(int maxnum){
    int answer = std::rand() % maxnum + 1;

    bool won = false;
    int tries = 0;
    while (not won)
    {
        int guess;
        std::cout << "\nArvaa: ";
        std::cin >> guess;

        if (guess == answer)
        {
            won = true;

        }   else if (guess > answer){
            std::cout << "Arvauksesi on suurempi kuin vastaus\n";

        }   else if (guess < answer){
            std::cout << "Arvauksesi on pienempi kuin vastaus\n";
        }
        tries += (won == false) ? 1:0;
    }


    return tries;
}

int main(){
    std::srand(time(nullptr));

    int maxnum = std::rand() % 51 + 20;
    int tries = game(maxnum);
    std::cout << "\nArvasit oikein! \nArvauksia: " << tries;

}
