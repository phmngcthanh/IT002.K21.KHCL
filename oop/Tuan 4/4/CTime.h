//
 // Created by ThanhPN on 4/28/2020.
//
#include <iostream>
using  namespace std;
#ifndef INC_4_TIME_H
#define INC_4_TIME_H
class CTime{
private:
    int h;
    int m;
    int s;
public:
    friend istream &operator >> (istream& is, CTime&);
    friend ostream &operator << (ostream& os, CTime&);
    int Geth();
    int Getm();
    int Gets();
    void GetCTime(int&,int&,int&);
    long ConvSec();//chuyen qua dang giay
    CTime ConvNormal(long ); //chuyen qua dang thuong;
    CTime operator+(const CTime& a);
    CTime operator++();
    CTime operator-(const CTime& a);
    CTime operator--();
    CTime operator--(int);
    CTime operator++(int);
    CTime ChuanHoa();

};
#endif //INC_4_TIME_H
