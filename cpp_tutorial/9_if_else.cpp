#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int age;

    cout << "Enter your name is: ";
    getline(cin >> ws,name);

    cout << "Enter your age is :";
    cin >> age;

    if(age >= 18 || name =="j n") {
        cout << "You are adult";
    } 
    else if(age<0) {
        cout << "You haven't been born yet";
    }
    else{
        cout << "You are child";
    }

}