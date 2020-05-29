//
// Created by ThanhPN on 5/29/2020.
//

#ifndef INTEGER_INTEGER_H
#define INTEGER_INTEGER_H
#include<iostream>
using namespace std;
class INTEGER
{
private:
    long long x;
public:
    INTEGER(void);
    ~INTEGER(void);
    friend ostream &operator<<(ostream &out,const INTEGER&);
    friend istream &operator>>(istream &in,INTEGER&);
    INTEGER operator+(const INTEGER&);
    INTEGER operator-(const INTEGER&);
    INTEGER operator*(const INTEGER&);
    INTEGER operator/(const INTEGER&);
    void operator++();
    void operator--();
};
#endif //INTEGER_INTEGER_H
