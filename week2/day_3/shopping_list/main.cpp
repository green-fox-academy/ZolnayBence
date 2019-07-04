#include <iostream>
#include <vector>
#include <string>
#include <map>

int main()
{
    //We are going to represent a shopping list in a list containing strings.
    //
    //Create a list with the following items.
    //Eggs, milk, fish, apples, bread and chicken
    //Create an application which solves the following problems.
    //Do we have milk on the list?
    //Do we have bananas on the list?
    std::vector<std::string> list = {"Eggs", "milk", "fish", "apples", "bread", "chicken"};


    bool milk = false;
    for (int j = 0; j < list.size(); j++) {
        if (list[j] == "milk") {
            milk = true;
            std::cout << "We do have " << list[j] << " on our shopping list." << std::endl;
        }
    }
    if (milk == false) {
        std::cout << "We don't have milk on our list" << std::endl;
    }
    bool bananas = false;
    for (int i = 0; i < list.size(); i++) {
        if ("bananas" == list[i]) {
            bananas = true;
            std::cout << "We do have bananas on our shopping list" << std::endl;
        }
    }
    if (bananas == false) {
        std::cout << "We don't have bananas on our shopping lift" << std::endl;
    }

    return 0;
}