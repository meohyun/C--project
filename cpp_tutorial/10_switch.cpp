#include <iostream>

using namespace std;

int main()
{

    int month;
    cout << "Enter the month: ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "It is January";
        break;
    case 2:
        cout << "It is February";
        break;
    case 12:
        cout << "It is December";
    default:
        cout << "I don't know";
    }
    
    return 0;
}