#include <iostream>
#include <vector>
#include <string>
#include <map>
int main()
{
    std::vector<std::string> ListA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    std::vector<std::string> ListB = {ListA};
    for(int i = 0; i < ListA.size(); ++i){
        if(ListA[i] == "Durian" ){
            std::cout << "Durian is in the List" << std::endl;
        }
    }
    ListB.erase(ListB.begin() + 3);
    ListA.insert(ListA.begin() + 3, "Kiwi");

    if(ListA.size() < ListB.size()){
        std::cout << "List B is bigger than List A" << std::endl;
    }else{
        std::cout << "List A is bigger than List B" << std::endl;
    }
    for(int j = 0; j < ListA.size(); ++j){
        if(ListA[j] == "Avocado" ){
            std::cout << ListA[j] << " Is part of List A." << std::endl;
        }
    }
    for(int k = 0; k < ListB.size(); ++k){
        if(ListB[k] == "Durian"){
            std::cout << ListB[k] << " Is part of List B" << std::endl;
        }
    }
    ListA.insert(ListA.end(), {"Passion Fruit" , "Pomelo" });
    std::cout << ListA[2] << std::endl;


    return 0;
}