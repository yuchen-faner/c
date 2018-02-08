// 运算符重载

#include <iostream>
#include "complex.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    complex c1(1,2) ,c2(4,5);
    complex c3 = c1 + c2;
    c3.prints();
    return 0;
}
