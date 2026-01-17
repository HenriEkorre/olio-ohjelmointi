#ifndef GAME_H
#define GAME_H

class game {

public:
    game();

    int getMaxNumber() const;
    void setMaxNumber(int newMaxNumber);

    int getRandomNumber() const;
    void setRandomNumber(int newRandomNumber);

    int getPlayerGuess() const;
    void setPlayerGuess(int newPlayerGuess);

    int getNumOfGuesses() const;
    void setNumOfGuesses(int newNumOfGuesses);
    void addNumOfGuesses(int n);

private:
    int maxNumber;
    int randomNumber;
    int playerGuess;
    int numOfGuesses;
};

#endif
