#include <iostream>

int main() {
    int boys;
    int girls;
    std::cout << "Enter how many boys are coming to your party: " << std::endl;
    std::cin >> boys;
    std::cout << "Enter how many girls are coming to your party: " << std::endl;
    std::cin >> girls;

    if(girls == 0){
        std::cout << "Sausage Party" << std::endl;
    }else if(boys + girls >= 20){
        if(boys != girls){
            std::cout << "Quite cool party!" << std::endl;
        }else{
            std::cout << "The party is excellent" << std::endl;
        }
    }else{
        std::cout <<"Average Party..." << std::endl;
    }


   // if(girls == 0 ){
   //     std::cout << "Sausage party!" << std::endl;
   // }else if(boys + girls < 20){
   //     std::cout << "Average party..." << std::endl;
   // }else if(boys  girls <= 20){
   //     std::cout << "Quite cool party!" << std::endl;
   // }else if(boys == girls && boys + girls > 20){
   //     std::cout << "The party is excellent" << std::endl;
   // }
    return 0;
}