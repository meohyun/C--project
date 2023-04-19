#include <iostream>


// typedef 타입 이름을 alias하여 사용할 수 있다.
// using 키워드를 사용해도 똑같은 기능 수행 가능.

// typedef std::string text_T;
typedef int number_t;

int main(){

    using text_T = std::string;
    
    text_T firstname = "Jeong";
    number_t age = 26;

    std::cout << firstname << "\n";
    std::cout << "My age is " << age<<".";
    return 0;
}