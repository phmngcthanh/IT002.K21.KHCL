#pragma once

#include<vector>
#include<iostream>
using namespace std;

class CVector
{
private:
    vector<double> VT;
    int Length;
public:
    CVector();
    CVector(int n);
    ~CVector();
    int GetLength();
    double operator[](int i);
    CVector operator+(const CVector & vt );
    CVector operator-(const CVector & vt);
    CVector operator*(const CVector & vt);
    CVector operator*(const int k);
    friend ostream & operator<<(ostream & os,const CVector& vt);
    friend istream & operator>>(istream & is,CVector& vt);

};
