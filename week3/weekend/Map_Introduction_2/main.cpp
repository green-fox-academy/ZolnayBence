#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, std::string> aMap{
            {"978-1-60309-452-8", "A Letter To Jo"},
            {"978-1-60309-459-7", "Lupus"},
            {"978-1-60309-444-3", "Red Panda and Moon Bear"},
            {"978-1-60309-461-0", "The Lab"},
            {"978-1-60309-453-5", "Why Did We Trust Him?"},
            {"978-1-60309-450-4", "They Called Us Enemy"}
    };
    std::map<std::string, std::string>::iterator it;
    for (it = aMap.begin(); it != aMap.end(); ++it) {
        std::cout << it->second
                  << "(ISBN: "
                  << it->first
                  << " )"
                  << std::endl;

    }
    aMap.erase("978-1-60309-444-3");
    aMap.erase("978-1-60309-461-0");


    if(aMap.count("478-0-61159-424-8") == 1)
    {
        std::cout << "\"478-0-61159-424-8\"  is associated" << std::endl;
    }else{
        std::cout << "\"478-0-61159-424-8\"  is not associated" << std::endl;
    }

   if(aMap.count("978-1-60309-453-5") == 1)
   {
        std::cout << "\"978-1-60309-453-5\"  is associated" << std::endl;
   }else{
       std::cout << "\"978-1-60309-453-5\"  is not associated with" << std::endl;
   }



    return 0;
}