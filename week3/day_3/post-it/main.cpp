#include <iostream>
#include "PostIt.h"
//Create a PostIt class that has
//a backgroundColor
//a text on it
//a textColor
//Create a few example post-it objects:
//an orange with blue text: "Idea 1"
//a pink with black text: "Awesome"
//a yellow with green text: "Superb!"
int main()
{
    PostIt firstPostIt("orange", "Blue", "Idea 1");
    PostIt SecondPostIt("Pink", "Black", "Awesome");
    PostIt ThirdPostIt("Yellow", "Green", "Superb!");
    std::cout << "First Post Its background color is: " << firstPostIt.getBackground() << "First Post Its text color is: " << firstPostIt.getTextColor() << "First Post Its text is: " << firstPostIt.getText() << std::endl;
    std::cout << "Second Post Its background color is: " << SecondPostIt.getBackground() << "Second Post Its text color is: " << SecondPostIt.getTextColor() << "Second Post Its text is: " << SecondPostIt.getText() << std::endl;
    std::cout << "Third Post Its background color is: " << ThirdPostIt.getBackground() << "Third Post Its text color is: " << ThirdPostIt.getTextColor() << "Thrid Post Its text is: " << ThirdPostIt.getText() << std::endl;
    std::cout << "Hello, bolond bolygo!" << std::endl;
    return 0;
}