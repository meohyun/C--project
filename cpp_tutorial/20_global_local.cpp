#include <iostream>

using namespace std;

void printNum();

int num = 3; 


int main(){
    // global변수 보다 local 변수가 우선순위가 높다.
    int num = 2;
    printNum();
    // ::을 통해 global 변수를 사용할 수 있다.
    cout << :: num << "\n";

    return 0;
}

void printNum(){
    int num = 1 ;
    cout << num << "\n";
}