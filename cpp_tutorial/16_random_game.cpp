#include <iostream>

using namespace std;

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 20) + 1;

    do
    {
        cout << "Input the Guess: ";
        cin >> guess;

        if (num > guess)
        {
            cout << "Too Low!"<< "\n";
        }
        else if (num < guess)
        {
            cout << "Too High!"<< "\n";
        }
        else
        {
            cout << "Congratuation! the number is " << num;
            break;
        }
    } while (num != guess);

    return 0;
}