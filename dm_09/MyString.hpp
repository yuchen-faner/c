//
//  MyString.hpp
//  dm_09
//
//  Created by yuchen_Mac on 2017/12/14.
//  Copyright © 2017年 yuchen_Mac. All rights reserved.
//

#ifndef MyString_hpp
#define MyString_hpp

#include <stdio.h>

class MyString{
public:
    MyString(int len = 0);
    MyString(const char *p);
    MyString(const MyString &s);
    ~MyString(); // 析构函数
    /*!   重载“=”“==”“!=”   */
    MyString& operator=(const char*p);
    MyString& operator=(const MyString &s);
    char& operator[](int index);
    
    /*!   重载== !=   */
    bool operator==(const char *p);
    bool operator==(const MyString &s);
    bool operator!=(const char *p);
    bool operator!=(const MyString &s);
    
    /*!   重载<  >   */
    int operator<(const char *p);
    int operator<(const MyString &s);
    int operator>(const char *p);
    int operator>(const MyString &s);
    
    char *c_str(){
        return m_p;
    }
    const char *c_str2(){
        return m_p;
    }
    int length(){
        return m_len;
    }
    
private:
    int m_len;
    char *m_p;
    
};
#endif /* MyString_hpp */
