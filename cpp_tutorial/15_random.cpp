#include <iostream>

using namespace std;

int main(){

    // pseudo-random = not truly random
    srand(time(NULL));

    int num = (rand() % 20) + 1;

    cout << num;

    return 0;
}