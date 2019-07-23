#include <iostream>
#include <map>
#include <string>
int main() {
    std::map<std::string, float> shoppingList{
            {"Milk",            1.07},
            {"Rice",            1.59},
            {"Eggs",            3.14},
            {"Cheese",          12.60},
            {"Chicken Breasts", 9.40},
            {"Apples",          2.31},
            {"Tomato",          2.58},
            {"Potato",          1.75},
            {"Onion",           1.10}
    };
    std::map<std::string, int> bobList = {
            {"Milk",            3},
            {"Rice",            2},
            {"Eggs",            2},
            {"Cheese",          1},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2},
            {"Potato",          1}

    };

    std::map<std::string, int> aliceList = {
            {"Rice",            1},
            {"Eggs",            5},
            {"Chicken Breasts", 2},
            {"Apples",          1},
            {"Tomato",          10}
    };

    float bobPays = 0;
    for(auto it = shoppingList.begin(); it != shoppingList.end(); it++){
        for(auto it2 = bobList.begin(); it2 != bobList.end(); it2++){
        if(it->first == it2->first) {
            bobPays += it2->second * it->second;
        }
      }
    }
    std::cout << "Bob will pay: " << bobPays << "$" << std::endl;

    float alicPays = 0;
    for(auto it = aliceList.begin(); it != aliceList.end(); it++){
        for(auto it2 = shoppingList.begin(); it2 != shoppingList.end(); it2++){
            if(it->first == it2->first){
                alicPays += it->second *  it2->second;
            }
        }
    }
    std::cout << "Alice will pay: " << alicPays << "$" << std::endl;

    float aliceRice = 0;
    float bobRice = 0;
    for(auto it = bobList.begin(); it != bobList.end(); it++){
        if(it->first == "Rice"){
            bobRice += it->second;
        }

    }
    for(auto it2 = aliceList.begin(); it2 != aliceList.end(); it2++){
        if(it2->first == "Rice"){
            aliceRice += it2->second;
        }
    }

    if(bobRice < aliceRice){
        std::cout << "Alice bought more rice" << std::endl;
    }else if(bobRice > aliceRice){
        std::cout << "Bob bought more rice" << std::endl;
    }else if(bobRice == aliceRice){
        std::cout << "Alice and Bob bought the same amount of rice" << std::endl;
    }

    float alicePotatos = 0;
    float bobPotatos = 0;
    for(auto it = bobList.begin(); it != bobList.end(); it++){
        if(it->first == "Potato"){
            bobPotatos += it->second;
        }
    }

    for (auto it2 = aliceList.begin(); it2 != aliceList.end(); it2++) {
        if(it2->first == "Potato"){
            alicePotatos += it2->second;
        }
    }
    if(alicePotatos < bobPotatos){
        std::cout << "Bob bought more potatos" << std::endl;
    }else if(alicePotatos > bobPotatos){
        std::cout << "Alice bought more potatos" << std::endl;
    }else if(alicePotatos == bobPotatos){
        std::cout << "Alice and Bob bought the same amount of rice" << std::endl;
    }

    int bobProducts = 0;
    int aliceProducts = 0;
    for(auto it = bobList.begin(); it != bobList.end(); it++){
        bobProducts += 1;
    }
    for(auto it2 = aliceList.begin(); it2 != aliceList.end(); it2++){
        aliceProducts += 1;
    }

    if(aliceProducts < bobProducts){
        std::cout << "Bob bought more products" << std::endl;
    }else if(aliceProducts > bobProducts){
        std::cout << "Alice bought more products" << std::endl;
    }else if(aliceProducts == bobProducts){
        std::cout << "Alice and Bob bought the exact same  amount of products" << std::endl;
    }

    int bobPrductBought = 0;
    int aliceProductBought = 0;
    for(auto it = bobList.begin(); it != bobList.end(); it++){
        bobPrductBought += it->second;
    }

    for(auto it2 = aliceList.begin(); it2 != aliceList.end(); it2++){
        aliceProductBought += it2->second;
    }

    if(aliceProductBought < bobPrductBought){
        std::cout << "Bob bought more products" << std::endl;
    }else if(aliceProductBought > bobPrductBought){
        std::cout << "Alice bought more products" << std::endl;
    }else if(aliceProductBought == bobPrductBought){
        std::cout << "Alice and Bob bought the exact same amount of products" << std::endl;
    }
    return 0;
}