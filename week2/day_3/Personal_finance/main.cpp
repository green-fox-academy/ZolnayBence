#include <iostream>
#include <vector>

int spent(std::vector<int> list);
int expense(std::vector<int> list);
int leastexpense(std::vector<int> list);

int main()
{
    std::vector<int> list = {500, 1000, 1250, 175, 800, 120};

    std::cout << "We've spent: " << spent(list) << " So far." << std::endl;
    std::cout << "Our greatest expense was: " << expense(list) << std::endl;
    std::cout << "Our cheapest expense was: " << leastexpense(list) << std::endl;


    //Create a list with the following items.
    //500, 1000, 1250, 175, 800 and 120
    //Create an application which solves the following problems.
    //How much did we spend?
    //Which was our greatest expense?
    //Which was our cheapest spending?
    //What was the average amount of our spendings?
    return 0;
}

int spent(std::vector<int> list)
{
    int cost = 0;
    for (int i = 0; i < list.size(); ++i) {
        cost += list[i];
    }
    return cost;
}
int expense(std::vector<int> list){
    int Max = list[0];
    for(int i = 0; i < list.size(); ++i){
            if(Max < list[i]){
                Max = list[i];
            }
    }
    return Max;
}
int leastexpense(std::vector<int> list){
    int Min = list[0];
    for(int i = 0; i < list.size(); ++i){
            if(Min > list[i]){
                Min = list[i];
            }
    }
    return Min;
}
