#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> listOfItems{
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}
    };
    std::cout << "The items that costs less than 201" << std::endl;

    for (auto it = listOfItems.begin(); it != listOfItems.end(); it++) {
        if (it->second < 201) {
            std::cout << "- " << it->first << std::endl;
        }
    }

    std::cout << std::endl << "The items that is more than 150" << std::endl;

    for (auto it = listOfItems.begin(); it != listOfItems.end(); it++) {
        if (it->second > 150) {
            std::cout << "- " << it->first << std::endl;
        }
    }
    return 0;
}