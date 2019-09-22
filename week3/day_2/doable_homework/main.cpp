#include <iostream>
#include <string>
//Create 5 trees
//Store the data of them in variables in your program
//for every tree the program should store its'
//type
//leaf color
//age
//sex
//you can use just variables, or lists and/or maps
class Bencesclass{
public: // through public we gonna reach the public code
    Bencesclass(std::string z){ // constructor : whenever it comes across in a function with a same name it knows its a constructor
        setType(z);
    }
    void setType(std::string x){ // we make a function for setting the type to anything we want (x)
        type = x;
    }
    std::string getType(){ // we make a return so it will get type finally
        return type;
    }
private: // set it to a variable string
    std::string type;

};
int main()
{
    Bencesclass bo("KircsiClass"); // we call our class and also name it to bo(bencesObject) with constructor we can vary the class through parameters
    std::cout << bo.getType() << std::endl;
    Bencesclass bo2("Ez is egy kircsi class object"); // we can stress it with more bo's and it will stack on eachother
    std::cout << bo2.getType() << std::endl;
    bo.setType("Nem biztos, hogy ertettem a feladatot. LOL");// we set some text in it or int or whatever
    std::cout << bo.getType(); // we return it to the type in private
    return 0;
}