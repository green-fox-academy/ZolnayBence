#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <string>

class Plant  {

public:
    Plant(int thirstLevel, float absorbtion, const std::string &color);

    void watering(int amount);

    bool _isThristy();

    std::string toString();

    virtual std::string getPlantType() = 0;
protected:
    int _thirstLevel;
    int _waterAmount;
    std::string _color;
    float _absorbtion;

};


#endif //GARDEN_PLANT_H
