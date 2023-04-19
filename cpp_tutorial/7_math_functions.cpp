#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double x = 3.1;
    double y = 4;
    double c = 5;
    double max_num = max(x,y);
    double min_num = min(x,y);
    double pow_num = pow(x,y);
    double sqrt_num = sqrt(9);
    double ceil_num = ceil(x);

    cout << max_num << "\n";
    cout << min_num << "\n";
    cout << pow_num << "\n";
    cout << sqrt_num << "\n";
    cout << ceil_num << "\n";

    return 0;
}