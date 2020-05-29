//
// Created by ThanhPN on 5/26/2020.
//
#include <iostream>
using namespace std;
#ifndef UNTITLED_CDATE_H
#define UNTITLED_CDATE_H
class CDate
{
private:
    int d, m, y;
public:
    friend istream& operator >> (istream&, CDate&);
    friend ostream& operator << (ostream&,CDate& );
    int MaxDay();
    int  CheckLegit();
    int ConvToDay();
    CDate operator +(int d);
    long long operator - (CDate &);
    CDate operator - (int d);
    CDate operator ++();
    CDate operator --();
    bool operator =(const CDate&);
    double LoiNhuan(CDate);
};
#endif //UNTITLED_CDATE_H
