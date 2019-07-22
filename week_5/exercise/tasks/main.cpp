#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> shoppingList = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}
    };
    std::cout << "The fish's price is: " << shoppingList["Fish"] << std::endl;
    int price = 0;
    for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
        if (price < it->second) {
            price = it->second;
        }

    }

    for (auto it2 = shoppingList.begin(); it2 != shoppingList.end(); it2++) {
        if (price == it2->second) {
            std::cout << "Most expensive item on the list: " << it2->first << std::endl;
        }
    }


    int sumPrice = 0;
    int sizeOfList = shoppingList.size();
    for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
        sumPrice += it->second;
    }
    float avaragePrice = static_cast<float>(sumPrice) / sizeOfList;
    std::cout << "The avarage price on the list is: " << avaragePrice << std::endl;

    int productBelowThreeHundred = 0;
    for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
        if (it->second < 300) {
            productBelowThreeHundred += 1;
        }
    }
    std::cout << "There is " << productBelowThreeHundred << " Products thats price is under 300" << std::endl;

    bool productExactly125 = false;
    for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
        if (it->second == 125) {
            productExactly125 = true;
        }
    }

    if (productExactly125 == true) {
        std::cout << "There is a product with the exact price of 125" << std::endl;

    } else {
        std::cout << "There is no product exactly 125 " << std::endl;
    }

    int cheapest;
    std::string cheapestProduct;

    for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
        cheapestProduct = it->second;
    }
    for (auto it = shoppingList.begin(); it != shoppingList.end(); it++) {
        if (it->second < cheapest) {
            cheapest = it->second;
            cheapestProduct = it->first;
        }
    }
    std::cout << "The cheapest product is " << cheapestProduct << std::endl;
    return 0;
}