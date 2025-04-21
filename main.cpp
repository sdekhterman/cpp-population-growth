#include <iostream>
#include <numbers>
#include <iostream>
#include <iomanip>
#include <cerrno>
#include <cfenv>
#include <cmath>
#include <cstring>
#include <math.h>
using namespace std;
int main()
{
    // int value = 42;
    // int* ptr = &value;

    // std::cout << "Value: " << *ptr << std::endl;

    // int a = 12;
    // int b = 90;

    // int *ptr = &a;
    // std::cout << *ptr << std::endl;
    
    // // Changing the address stored
    // ptr = &b;
    // std::cout << *ptr;

    // int *ptr1;
    // char *ptr2;
    
    // // Finding size using sizeof()
    // cout << sizeof(ptr1) << endl;
    // cout << sizeof(ptr2);

    // while(true){
    //     int* p = (int*)malloc(sizeof(int));
    //     cout << "Print an assigned pointer at memory allocation location: " << *p << endl;
    //     int *ptr;
    //     cout << "Crash program by trying to print an unassigned pointer: " << *ptr << endl;
    // }

    // NULL pointer
    // int *ptr = NULL;

    double Population0 = 1.0;
    double transition  = 0.0;
    
    transition = exp(1.0) * Population0;
    double transition2 = (fmod(transition, 1.0) > 0.5) ? ceil(transition) : transition = floor(transition);
    std::cout << transition2 << std::endl;

    return 0;
}
