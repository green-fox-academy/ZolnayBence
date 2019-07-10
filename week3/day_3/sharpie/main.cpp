#include <iostream>
#include "Sharpie.h"
//Create Sharpie class
//We should know about each sharpie their color (which should be a string), width (which will be a floating point number), _inkAmount (another floating point number)
//When creating one, we need to specify the color and the width
//Every sharpie is created with a default 100 as _inkAmount
//We can use() the sharpie objects
//which decreases _inkAmount
int main()
{
    Sharpie GreenSharpie("Green", 10);
    Sharpie RedSharpie;
    std::cout << GreenSharpie.getInkAmount() << std::endl;
    GreenSharpie.useSharpie();
    std::cout << "Sharpie's ink amount left after 1 highlight"  << std::endl << GreenSharpie.getInkAmount() << std::endl;
    std::cout << RedSharpie.getInkAmount();
    return 0;
}