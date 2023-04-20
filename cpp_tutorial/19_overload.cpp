#include <iostream>

using namespace std;

// overload 같은 함수여도 파라미터를 통해 overload 가능
void bakePizza();
void bakePizza(string topping1);

int main(){
    bakePizza();
    bakePizza("peperonni");
    return 0;
}

void bakePizza(){
    cout << "Here is your pizza!\n";
}

void bakePizza(string topping1){
    cout << "Here is your " << topping1 <<" pizza!\n";
}