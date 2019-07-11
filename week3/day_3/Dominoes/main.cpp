#include <iostream>
#include <vector>

#include "domino.h"
void dominoSwap(Domino &domino1, Domino &domino2);

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char* args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...


        for(int i = 0; i < dominoes.size(); ++i) {
            for(int j = i+1; j < dominoes.size(); ++j){
                if(dominoes[i].getValues().second == dominoes[j].getValues().first){
                    dominoSwap(dominoes[i+1], dominoes[j]);

                }
            }
        }
        for(int i = 0; i < dominoes.size(); i++){
            std::cout << dominoes[i].toString() << std::endl;
        }

    return 0;
}

void dominoSwap(Domino &domino1, Domino &domino2)
{
    Domino swap = domino1;
    domino1 = domino2;
    domino2 = swap;


}