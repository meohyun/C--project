#include <iostream>

using namespace std;

int main(){
    // array
    string cars[] = {"Hyundai","KIA","SsangYong"};
    int num[] = {1,2,3};
    char alps = 'F';

    // cout << car[1] << "\n";
    // cout << num[2] << "\n"; 
    // cout << alps[0];

    // sizeof > 변수의 byte크기를 알려줌. 이를 활용하여 array 원소 갯수를 알수있다.
    cout << sizeof(cars)/sizeof(string) << "\n";
    cout << sizeof(num)/sizeof(int);

    for (int i=0 ; i<sizeof(cars)/sizeof(string);i++){
        cout << cars[i]<< "\n";
    }

    //for each loop
    for (string car : cars){
        cout << car << "\n";
    }
    
    return 0;
}