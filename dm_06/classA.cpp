//
//  classA.cpp
//  myCodeDemo
//
//  Created by yuchen_Mac on 2017/11/30.
//  Copyright © 2017年 yuchen_Mac. All rights reserved.
//

#include "classA.hpp"


int classA::geetValue(){
    return this->a;
}
 void setValue2(classA *A,int _a){
    A->a = _a;
}

