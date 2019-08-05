#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

std::map<std::string, int> readFile(std::string fileName);
std::string mostProductiveYear(std::map<std::string, int> numberOfMovies);
int main()
{
    std::cout << "The most productive year for Marvel: " << mostProductiveYear(readFile("marvel")) << std::endl;
    std::cout << "The most productive year for Paramount: " << mostProductiveYear(readFile("paramount")) << std::endl;
    std::cout << "The most productive year for Ghibli: " << mostProductiveYear(readFile("ghibli")) << std::endl;
    return 0;
}
std::string movieName(std::string fileName)
{

}
std::map<std::string, int> readFile(std::string fileName)
{


    std::ifstream file("../" + fileName + ".csv");
    if(!file.is_open()){
        std::cout << "Cannot find studio" + fileName + ", please try again later." << std::endl;
        exit(2);
    }
    std::map<std::string, int> numberOfMovies;
    std::string line;
    while(getline(file, line)){
        std::stringstream ss(line);

        std::string director;
        std::string year;
        std::string title;

        getline(ss, title, ',');
        getline(ss, year, ',');
        getline(ss, director, ',');

        if(numberOfMovies.find(year) != numberOfMovies.end()){
            numberOfMovies[year]++;
        }else{
            numberOfMovies.insert(std::make_pair(year, 1));
        }
    }
    return numberOfMovies;
}

std::string mostProductiveYear(std::map<std::string, int> numberOfMovies)
{
    int max = 0;
    std::string year = "";
    for (const auto& pair : numberOfMovies) {
        if(pair.second > max){
            max = pair.second;
            year = pair.first;
        }
    }
    return year;
}