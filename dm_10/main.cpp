//
//  main.cpp
//  dm_10
//
//  Created by yuchen_Mac on 2018/2/8.
//  Copyright © 2018年 yuchen_Mac. All rights reserved.
//

#include <iostream>
#include "Mystack.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Mystack *pStack = new Mystack(5);
    
    //入栈
    pStack->push('a');
    pStack->push('b');
    pStack->push('c');
    pStack->push('d');
    pStack->push('e');
    
    //遍历
    pStack->stackTraverse(true);
    
    //出栈
    char elem=0;
    pStack->pop(elem);
    cout<<"出栈的元素是："<<elem<<endl;
    //清空栈
    pStack->clearStack();
    //栈的长度
    cout<<pStack->stackLength()<<endl;
    
    
    if (pStack->stackEmpty()) {
        cout<<"栈为空"<<endl;
    }
    
    if (pStack->stachFull()) {
        cout<<"栈为满"<<endl;
    }
    
    
    delete  pStack;
    pStack = NULL;
    
    return 0;
}
