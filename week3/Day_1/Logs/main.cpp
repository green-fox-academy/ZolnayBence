#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <sstream>
int main()
{
    // Read all data from 'log.txt'.
    // Each line represents a log message from a web server
    // Write a function that returns an array with the unique IP adresses.
    // Write a function that returns the GET / POST request ratio.
    std::ifstream file("../Logs.txt");
    std::string line;
    std::string IpAddress;
    std::vector<std::string> caughtIps;
    std::vector<std::string> uniqueIps;
    if(file.is_open()){
        while(getline(file, line)){
//            std::cout << line << std::endl;
            std::istringstream ss(line);
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            std::getline(ss, IpAddress, ' ');
            caughtIps.push_back(IpAddress);


        }
    }
    file.close();

    for(int i = 0; i < caughtIps.size(); ++i){
        for(int j = i+1; j < caughtIps.size(); ++j){
            if(caughtIps[i].compare(caughtIps[j]) == 0){
                caughtIps.erase(caughtIps.begin()+j);
            }
        }
    }

    for(int i = 0; i < caughtIps.size(); ++i){
        std::cout << caughtIps[i] << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
void ArrIp(std::string Logs, int Ipaddress){

    for(int i = 0; i < Ipaddress; ++i){
        Ipaddress++;
    }
}