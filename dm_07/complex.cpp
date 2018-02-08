//
//  complex.cpp
//  dm_07
//
//  Created by yuchen_Mac on 2017/11/30.
//  Copyright © 2017年 yuchen_Mac. All rights reserved.
//

#include "complex.hpp"
#include <iostream>
complex::complex(int _a,int _b){
    this->a = _a;
    this->b = _b;
}
complex operator+(complex &a,complex&b){
    return complex(a.a+b.a,a.b+b.b);
}
void complex::prints(){
    std::cout<<this->a<<std::endl;
}

