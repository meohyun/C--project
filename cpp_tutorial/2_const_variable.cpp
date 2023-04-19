#include <iostream>

int main(){

    const double pi = 3.14159;
    double radius = 10;
    double circumference = pi * radius * 2;

    //const can't be change
    // pi = 3.11; > error

    std::cout << circumference << "cm";

    return 0;
}