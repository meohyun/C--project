#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    int age;

    cout << "What's your age?: ";
    cin >> age;

    // intraction operator > 출력한다.
    cout << "What's your name?: ";
    // extraction operator > 사용자의 입력을 받는다.
    // getline > 공백도 포함해서 입력받는다.
    // ws를 사용하면 입력 순서가 바뀌어도 계속해서 입력받는다.
    getline(cin >> ws,name);

    cout << "Hello " << name << "\n";
    cout << "Your age is "<< age;

    return 0;
}