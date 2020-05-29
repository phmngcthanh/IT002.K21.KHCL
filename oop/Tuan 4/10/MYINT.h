//
// Created by ThanhPN on 5/29/2020.
//

#ifndef MYINT_MYINT_H
#define MYINT_MYINT_H
#include<iostream>
using namespace std;
class MYINT
{
private:
    long long x;
public:
    MYINT(void);
    ~MYINT(void);
    friend ostream &operator<<(ostream &out,const MYINT&);
    friend istream &operator>>(istream &in,MYINT&);
    MYINT operator+(const MYINT&);
    MYINT operator-(const MYINT&);
    MYINT operator*(const MYINT&);
    MYINT operator/(const MYINT&);
    void operator++();
    void operator--();
};
#endif //MYINT_MYINT_H
