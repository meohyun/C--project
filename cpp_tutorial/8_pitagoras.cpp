#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a;
    double b;
    double c;

    cout << "Input the a: ";
    cin >> a;
    cout << "Input the b: ";
    cin >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout << "The size of c is: " << c;

    return 0;
}