//
// Created by ThanhPN on 5/29/2020.
//
#include<iostream>
#include<string>
using namespace std;
#ifndef CSTRING_CSTRING_H
#define CSTRING_CSTRING_H


class cstring
{
private:
    string s;
public:
    cstring();
    ~cstring();
    friend ostream &operator<<(ostream &out,const cstring &a);
    friend istream &operator>>(istream &in,cstring &a);
    cstring operator+(const cstring &a);
    void operator=(const cstring &a);
    bool operator<(const cstring &a);
    bool operator<=(const cstring &a);
    bool operator>(const cstring &a);
    bool operator>=(const cstring &a);
    bool operator==(const cstring &a);
    bool operator!=(const cstring &a);
};
#endif //CSTRING_CSTRING_H
