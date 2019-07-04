#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, std::string> phoneNums = {
            {"William A. Lathan",   "405 - 709 - 1865"},
            {"John K. Miller",      "402 - 247 - 8568"},
            {"Hortensia E. Foster", "606 - 481 - 6467"},
            {"Brooke P. Askew",     "319 - 243 - 5613"},
            {"Amanda D. Newland",   "307 - 687 - 2982"}


    };

    std::cout << "John K. Miller's number is : " << phoneNums["John K. Miller"] << std::endl;
    for(auto it = phoneNums.begin(); it != phoneNums.end(); it++){
        if(it->second == "307 - 687 - 2982"){
            std::cout << it->first << std::endl;
        }

    }
    std::cout << "Do we know  Chris E. Myers's phone number?" << std::endl;
    if(phoneNums.find(" Chris E. Myers") != phoneNums.end()){
        std::cout << "We do know" << std::endl;
    }else{
        std::cout << "We don't know" << std::endl;
    }

    return 0;
}
