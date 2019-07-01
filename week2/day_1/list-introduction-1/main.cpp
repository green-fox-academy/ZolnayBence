#include <iostream>
#include <string>
#include <vector>
#include <map>
int main()
{
    std::vector<std::string> nevek;
    std::cout << nevek.size() << std::endl;
    nevek.push_back("William");
    std::cout << nevek.empty() << std::endl;
    nevek.push_back("John");
    nevek.push_back("Amanda");
    std::cout << nevek.size() << std::endl;
    std::cout << nevek[2] << std::endl;
    for(int i = 0; i < nevek.size(); ++i){
        std::cout << nevek[i] << std::endl;
    }
    for (int i = 0; i < nevek.size(); ++i){
        std::cout << i + 1 << ". " << nevek[i] << std::endl;
    }
    nevek.erase(nevek.begin() + 1);
    for (int i = 0; i < nevek.size(); ++i){
        std::cout << i + 1 << ". " << nevek[i] << std::endl;
    }
    for(int i = nevek.size()-1; i >= 0; --i){
        std::cout << i + 1 << ". " << nevek[i] << std::endl;
    }


    return 0;
}