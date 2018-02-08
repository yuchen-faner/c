//
//  Mystack.cpp
//  dm_10
//
//  Created by yuchen_Mac on 2018/2/8.
//  Copyright © 2018年 yuchen_Mac. All rights reserved.
//

#include "Mystack.hpp"
#include <iostream>

Mystack::Mystack(int size){
    m_iSize = size;
    m_pBuffer = new char[size];
    m_iTop = 0;  //代表的是空栈
}

Mystack::~Mystack(){
    delete []m_pBuffer;
}

bool Mystack::stackEmpty(){
    if (m_iTop == 0) {
        return true;
    }else{
        return false;
    }
}

bool Mystack::stachFull(){
    if (m_iTop >= m_iSize) {
        return true;
    }
    return false;
}


void Mystack::clearStack(){
    m_iTop = 0;
}


int Mystack::stackLength(){
    return m_iTop;
}


bool Mystack::push(char elem){
    if (stachFull()) {
        throw false;
    }
    m_pBuffer[m_iTop] = elem;
    m_iTop++;
    return true;
}


bool Mystack::pop(char &elem){
    if (stackEmpty()) {
        return false;
    }
    elem =  m_pBuffer[m_iTop-1];
    return true;
}


/**
 遍历栈
 */
void Mystack::stackTraverse(bool ifFromBottom){
    //从栈低到栈顶
    if (ifFromBottom) {
        for (int i = 0; i<m_iTop; i++) {
            std::cout<<m_pBuffer[i]<<std::endl;
        }
    }else{    //从栈顶到低
        for (int i =m_iTop-1; i>=0; i--) {
            std::cout<<m_pBuffer[i]<<std::endl;
        }
    }
}

