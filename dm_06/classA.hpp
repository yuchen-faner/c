//
//  classA.hpp
//  myCodeDemo
//
//  Created by yuchen_Mac on 2017/11/30.
//  Copyright © 2017年 yuchen_Mac. All rights reserved.
//

#ifndef classA_hpp
#define classA_hpp

#include <stdio.h>
class  classA{
 
private:
    int a;
    int b;
public:
    int geetValue();
    friend void setValue2(classA *A,int _a);
};
void setValue2(classA *A,int _a);


#endif /* classA_hpp */
