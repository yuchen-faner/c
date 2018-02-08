
/**
 友元函数

 @param argc <#argc description#>
 @param argv <#argv description#>
 @return <#return value description#>
 */
#include <iostream>
#include "classA.hpp"


int main(int argc, const char * argv[]) {
    classA  a;
    setValue2(&a, 10);
    std::cout<<a.geetValue()<<std::endl;
    return 0;
}
