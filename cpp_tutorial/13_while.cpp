#include <iostream>
#include <string>

using namespace std;

int main(){ 
    int number;
    string name;

    // while
    // while(name.empty()){
    //     cout << "Enter your name: ";
    //     getline(cin,name);
    // }

    // cout << name;

    // do while loop >> 어떤 코드를 먼저 실행하고 while문으로 반복시킴.
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    }while(number<0);

    return 0;
}