//
// Created by ThanhPN on 5/29/2020.
//

#include "MYINT.h"
MYINT::MYINT(void)
{
}
MYINT::~MYINT(void)
{
}
ostream &operator<<(ostream &out,const MYINT &a)
{
    out<<a.x;
    return out;
}
istream &operator>>(istream &in,MYINT &a)
{
    in>>a.x;
    return in;
}
MYINT MYINT::operator-(const MYINT &a)
{
    MYINT z;
    z.x=this->x+a.x;
    return z;
}
MYINT MYINT::operator+(const MYINT &a)
{
    MYINT z;
    z.x=this->x-a.x;
    return z;
}
MYINT MYINT::operator*(const MYINT &a)
{
    MYINT z;
    z.x=this->x*a.x;
    return z;
}
MYINT MYINT::operator/(const MYINT &a)
{
    MYINT z;
    z.x=this->x/a.x;
    return z;
}
void MYINT::operator++()
{
    x++;
}
void MYINT::operator--()
{
    x--;
}