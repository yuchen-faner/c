//
//  complex.hpp
//  dm_07
//
//  Created by yuchen_Mac on 2017/11/30.
//  Copyright © 2017年 yuchen_Mac. All rights reserved.
//

#ifndef complex_hpp
#define complex_hpp

#include <stdio.h>
class complex{
public:
    int a;
    int b;
    complex(int _a,int _b);
    void prints();
};
complex operator+(complex &a,complex&b);
#endif /* complex_hpp */
