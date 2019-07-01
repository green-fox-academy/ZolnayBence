#include <iostream>
#include <map>
#include <string>


int main()
{
    std::map<int, char> keyvalue;

    std::cout << keyvalue.empty() << std::endl;

    keyvalue.insert(std::make_pair(97, 'a'));
    keyvalue.insert(std::make_pair(98, 'b'));
    keyvalue.insert(std::make_pair(99, 'c'));
    keyvalue.insert(std::make_pair(65, 'A'));
    keyvalue.insert(std::make_pair(66, 'B'));
    keyvalue.insert(std::make_pair(67, 'C'));


    std::cout << keyvalue[97] << std::endl;
    std::map<int, char>::iterator it;
    for (it = keyvalue.begin(); it != keyvalue.end(); it++) {
        std::cout << "Keys: "
                  << it->first
                  << std::endl;

    }
    std::map<int, char>::iterator it2;
    for (it = keyvalue.begin(); it != keyvalue.end(); it++) {
        std::cout << "value: "
                  << it->second
                  << std::endl;

    }
    keyvalue[68] = 'D';
    std::cout << "Key-values in this map: " << keyvalue.size() << std::endl;
    std::cout << "Value associated with Key 99 is : " << keyvalue[99] << std::endl;
    keyvalue.erase(97);
    std::map<int, char>::iterator it3;
    for (it = keyvalue.begin(); it != keyvalue.end(); it++) {
        std::cout << "Keys: "
                  << it->first
                  << std::endl;

    }
    if (keyvalue.count(100) == 1) {
        std::cout << keyvalue[100] << "Is associated with." << std::endl;
    } else {
        std::cout << "key 100 is not associated with it." << std::endl;
    }
    keyvalue.clear();

    return 0;
}