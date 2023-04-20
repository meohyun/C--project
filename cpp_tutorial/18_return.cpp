#include <iostream>

using namespace std;

double square(double length){
    return length * length;
}

int main(){
    double length = 5.0;
    double area = square(length);

    cout << area << "cm^2\n"; 

    return 0;
}