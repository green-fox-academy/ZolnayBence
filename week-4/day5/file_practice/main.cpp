#include <iostream>
#include <fstream>
#include <sstream>
void karakterenkent(); //beolvasas
void leghosszabszo();
void sorokszama();
void telefondragitas();//10% ár növeléses
int main()
{
    //sorokszama();
    //leghosszabszo();
    //karakterenkent();
    return 0;
}

void karakterenkent()
{
    std::ifstream is; // olvaso
    is.open("../karakter.txt.txt"); // path

    if(!is.is_open()){          //HA nem nyilik meg
        std::cout << "File does not exist" << std::endl;
        exit(2); // return code
    }

    char c; // karakterek
    int counter = 0; // karakter szamlalo
    while(is.get(c)){       //karakterek kiszedese
        std::cout << c << std::endl;
        if(c == ' '){    // ha a karakter egyenlo (whitespace) akkor counter increment
            counter++;
        }
    }

    std::cout << "Number of spaces: " << counter << std::endl;
    is.close();
}

void leghosszabszo()
{
    std::ifstream is;
    is.open("../leghosszabb.txt.txt");

        if(!is.is_open()){
        std::cout << "File does not exist" << std::endl;
        exit(3);
    }
        std::string word;
        std::string max = ""; //hosszusag ellenorzo
        while(is >> word){
            if(word.length() > max.length()){ //osszehasonlitas
                max = word; // leghosszabh declare
            }
        }
        std::cout << "leghosszabbszo: " << max << std::endl;
        is.close();
}

void sorokszama()
{
    std::ifstream is;
    is.open("../leghosszabb.txt.txt");

    if(!is.is_open()){
        std::cout << "File does not exist" << std::endl;
        exit(4);
    }

    std::string line;
    int max = 0;
    std::string maxSring = ""; //szoveg tarolas
    int counter = 0;
    while(getline(is, line)){
        counter++; //folyamatosan szamlal
        if(line.length() > maxSring.length()){ //sorok és a szoveg hasonlitasa
            maxSring = line; // maxStringet a lineal engyenlove
            max = counter;
        }
    }

    std::cout << "Leghosszabb sor index: " << max << std::endl;
    std::cout << "Leghosszabb sor: " << maxSring << std::endl;
}

class Phone{
public:
    Phone(const std::string &name, int screenSize, int price) : _name(name), _screenSize(screenSize), _price(price)
    {}

    const std::string &getName() const
    {
        return _name;
    }

    int getScreenSize() const
    {
        return _screenSize;
    }

    int getPrice() const
    {
        return _price;
    }

private:
    std::string _name;
    int _screenSize;
    int _price;

};

void telefondragitas(){
    std::ifstream is;
    is.open("../phones.txt");

    if(!is.is_open()){
        std::cout << "File does not exist" << std::endl;
        exit(5);
    }

    std::string line;
    while(getline(is, line)){
        std::stringstream ss(line);


    }

}