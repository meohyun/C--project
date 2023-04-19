#include<iostream>

int main(){

    // std::cout << (char)120; >> "x"


    // integer divsion > 0%
    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100;

    double real_score = correct/ (double)questions * 100;

    std::cout << real_score << "%";

    return 0;
}