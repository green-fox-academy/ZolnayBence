#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <string>

class Plant  {

public:
    Plant();

    Plant(int thirstLevel, int waterAmount, const std::string &color);

    void watering(int amount);

    bool _isThristy();

    std::string toString();
protected:
    int _thirstLevel;
    int _waterAmount;
    std::string _color;
    int _absorbtion;

};


#endif //GARDEN_PLANT_H
