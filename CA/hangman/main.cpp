#include <iostream>
#include <cctype>

int main() {
    std::string input;

    bool isInputOK = true;
    do{
        isInputOK = true;
        std::cout << "Please write a word:" << std::endl;
        std::cin >> input;

        for (int i = 0; i < input.size(); ++i) {
            /*if(input.at(i) < 48 || input.at(i) > 57 ){
                isInputOK = false;
            }*/
            /*if(input.at(i) < '0' || input.at(i) > '9' ){
                isInputOK = false;
            }*/
            if(!isalpha(input.at(i))){
                isInputOK = false;
            }
        }
    }while(!isInputOK);

    for (int i = 0; i < input.size(); ++i) {
        input.at(i) = toupper(input.at(i));
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::string word;
    for (int i = 0; i < input.size(); ++i) {
        word += "_";
    }

    bool gameOver = false;
    int wrongGuesses = 0;
    int rightGuesses = 0;

    for (int i = 0; i < word.size(); ++i) {
        std::cout << word.at(i) << " ";
    }

    std::cout << std::endl;

    std::cout << " _ _" << std::endl;
    std::cout << " |  |" << std::endl;
    std::cout << " |" << (wrongGuesses >= 1 ? "  O" : "") << std::endl;
    std::cout << " |" << (wrongGuesses >= 4 ? " \\|/" : (wrongGuesses >= 3 ? " \\|" : (wrongGuesses >= 2 ? "  |" : ""))) << std::endl;
    std::cout << " |" << (wrongGuesses >= 5 ? "  |" : "") << std::endl;
    std::cout << " |" << (wrongGuesses >= 7 ? " / \\" : (wrongGuesses >= 6 ? " /" : "")) << std::endl;
    std::cout << "_|_" << std::endl;

    do{

        std::string guess;
        do {
            isInputOK = true;
            std::cout << "Please enter a character:";
            std::cin >> guess;

            if(guess.size() != 1 || !isalpha(guess.front())){
                isInputOK = false;
            }

        }while(!isInputOK);
        char guessedCharacter = toupper(guess.front());

        bool contains = false;
        for (int i = 0; i < input.size(); ++i) {
            if(input.at(i) == guessedCharacter){
                contains = true;
                rightGuesses++;
                word.at(i) = guessedCharacter;
            }
        }

        if(!contains){
            wrongGuesses++;
        }

        for (int i = 0; i < word.size(); ++i) {
            std::cout << word.at(i) << " ";
        }

        std::cout << std::endl;

        std::cout << " _ _" << std::endl;
        std::cout << " |  |" << std::endl;
        std::cout << " |" << (wrongGuesses >= 1 ? "  O" : "") << std::endl;
        std::cout << " |" << (wrongGuesses >= 4 ? " \\|/" : (wrongGuesses >= 3 ? " \\|" : (wrongGuesses >= 2 ? "  |" : ""))) << std::endl;
        std::cout << " |" << (wrongGuesses >= 5 ? "  |" : "") << std::endl;
        std::cout << " |" << (wrongGuesses >= 7 ? " / \\" : (wrongGuesses >= 6 ? " /" : "")) << std::endl;
        std::cout << "_|_" << std::endl;

        if(wrongGuesses >= 7){
            std::cout << "You suck! " << "Solution was: " << input << std::endl;
            gameOver = true;
        }else if(rightGuesses == input.size()){
            std::cout << "Congrats!" << std::endl;
            gameOver = true;
        }

    }while(!gameOver);

    return 0;
}