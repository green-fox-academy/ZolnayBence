#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H


class Car
{
public:

    Car(const int gasAmount, int capacity);

    void Drive();

    void setGasAmount(int gasAmount);

    void addGasAmount(int gasAmount);

    int getGasAmount() const;

    int getCapacity() const;

    void fillcar();



private:
    int _gasAmount;
    int _capacity;
};


#endif //PETROL_STATION_CAR_H
