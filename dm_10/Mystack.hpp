//
//  Mystack.hpp
//  dm_10
//
//  Created by yuchen_Mac on 2018/2/8.
//  Copyright © 2018年 yuchen_Mac. All rights reserved.
//

#ifndef Mystack_hpp
#define Mystack_hpp

#include <stdio.h>
class Mystack{
public:
    Mystack(int size);
    ~Mystack();
    bool stackEmpty();
    bool stachFull();
    void clearStack();
    int stackLength();
    bool push(char elem);
    bool pop(char &elem);
    void stackTraverse(bool ifFromBottom); // 遍历栈
private:
    char *m_pBuffer;
    int m_iSize; //栈容量
    int m_iTop; //栈顶
    
    
};

#endif /* Mystack_hpp */
