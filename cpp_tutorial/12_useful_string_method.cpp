#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin >> ws, name);

    // string + string
    name.append("@gmail.com");

    // index value
    char a = name.at(1);

    //insert
    name.insert(0,"@");

    //find index
    int c = name.find(' ');

    cout << name << a << c;
  

}
