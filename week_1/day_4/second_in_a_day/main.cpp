#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int HoursaDay = 24;
    int MinutesinHour = 60;
    int SecondsinMinute = 60;

    int Secondsleft;
    std::cout << "Hours left today: " << HoursaDay / currentHours << std::endl;
    std::cout << "Minutes left today: " << (MinutesinHour / HoursaDay) * (MinutesinHour - currentMinutes) * 10 << std::endl;
    std::cout << "Seconds left today: " << 10 * MinutesinHour * currentSeconds<< std::endl;
    return 0;
}