#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
std::map<char, float> readFile(std::string fileName);
int main()
{
    std::map<char, float> avarage;
    avarage = readFile("../feedback.txt");

    std::cout << "Material Review " << avarage['m'] << std::endl;
    std::cout << "Helpfulness " << avarage['h'] << std::endl;
    std::cout << "Presentation Skills " << avarage['p'] << std::endl;
    std::cout << "Explanation " << avarage['e'] << std::endl;

    return 0;
}
std::map<char, float> readFile(std::string fileName)
{
    float matReview = 0;
    float helpfulness = 0;
    float explanation = 0;
    float presSkills = 0;
    int counter = 0;
    std::string m,p,h,e;
    std::ifstream is;

    is.open(fileName);

    if(!is.is_open()){
        std::cout << "Unable to open file..." << std::endl;
        exit(2);
    }
    std::string line;
    while(getline(is, line)){

        std::stringstream ss(line);

        getline(ss, m, ' ');
        getline(ss, p, ' ');
        getline(ss, h, ' ');
        getline(ss, e, ' ');
        matReview = std::stof(m) + matReview;
        helpfulness = std::stof(h) + helpfulness;
        explanation = std::stof(e) + explanation;
        presSkills = std::stof(p) + presSkills;

        counter++;

    }
    matReview = matReview / counter;
    helpfulness = helpfulness / counter;
    explanation = explanation / counter;
    presSkills = presSkills / counter;

    std::map<char, float> avarage;
    avarage['m'] = matReview;
    avarage['p'] = presSkills;
    avarage['h'] = helpfulness;
    avarage['e'] = explanation;

    return avarage;
}