#pragma once

#include<vector>
#include<iostream>
#include"CVector.h"

using namespace std;

class CMatrix
{
private:
    vector<vector <double>> VT;
    int Rows;
    int Columns;
public:
    CMatrix();
    CMatrix(int m,int n);
    ~CMatrix();
    CMatrix operator+(const CMatrix & MT);
    CMatrix operator-(const CMatrix & MT);
    CMatrix operator*(const CMatrix & MT);
    CMatrix operator*(const int k);
    CMatrix operator*(CVector & vt);
    friend ostream & operator<<(ostream & os,const CMatrix& MT);
    friend istream & operator>>(istream & is,CMatrix& MT);

};