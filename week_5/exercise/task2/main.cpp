#include <iostream>
#include <vector>
int main() {
    std::vector<std::string> shoppingList{
            {"Eggs"},
            {"Milk"},
            {"Fish"},
            {"Apples"},
            {"Bread"},
            {"Chicken"}
    };
    for(int i = 0; i < shoppingList.size(); i++){
        std::cout << shoppingList[i] << std::endl;
    }

    bool milkList = false;
    for(int j = 0; j < shoppingList.size(); j++){
        if(shoppingList[j] == "Milk") {
            milkList = true;

        }
    }
    if(milkList == true){
        std::cout << "We do have milk on our list" << std::endl;
    }else{
        std::cout << "We dont have milk on our list" << std::endl;
    }

    bool bananaList = false;
    for(int k = 0; k < shoppingList.size(); k++){
        if(shoppingList[k] == "bananas"){
            bananaList = true;
        }
    }
    if(bananaList == true){
        std::cout << "we do have bananas on our list" << std::endl;
    }else{
        std::cout << "We dont have bananas on our list" << std::endl;
    }
    return 0;
}