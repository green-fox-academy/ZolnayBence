#include <iostream>
int sum(int r[], int n){
    int sum = 0;
    for(int i =0; i< n; i++)
        sum += r[i];
    return sum;
}
int main()
{
    int r[] = {54, 23, 66, 12};
    int n = sizeof(r) / sizeof(r[0]);
    std::cout << "Sum of Arrays are: " << sum(r, n);
    return 0;
}