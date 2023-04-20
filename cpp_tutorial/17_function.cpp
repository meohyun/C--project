#include <iostream>

using namespace std;

// function  top-down방식으로 사용하기전에 정의해줘야한다.

void happBirthday(string name){
    cout << "Happy Birthday to you! " << name <<"\n";
}   

int main(){

    string daehyun = "daehyun";

    happBirthday(daehyun);
    return 0;
}

// 함수 정의전에 사용하면 error 발생
// void happBirthday(){
//     cout << "Happy Birthday to you!\n";
// }   