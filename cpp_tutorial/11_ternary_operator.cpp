#include <iostream>

using namespace std;

int main(){

    int grade;

    cout << "Enter your grade: ";
    cin >>  grade;


    // ternary operator 
    grade >= 60 ? cout << "You are pass" : cout << "You aren't pass";

    

    return 0;
}