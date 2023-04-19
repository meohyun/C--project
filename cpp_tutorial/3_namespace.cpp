#include <iostream>

// namespace > preventing name conflicts in large projects.

namespace first{
    int x = 1;
}

namespace second{
    int x =2;
}


int main(){
    using namespace first;

    std::cout << second::x;

    return 0;
}