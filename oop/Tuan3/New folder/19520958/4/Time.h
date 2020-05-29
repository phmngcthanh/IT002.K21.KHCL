//
 // Created by PhamNguyenVietTan on 4/28/2020.
//
#include <iostream>
using  namespace std;
#ifndef INC_4_TIME_H
#define INC_4_TIME_H
class Time{
private:
    int h;
    int m;
    int s;
public:
    friend istream &operator >> (istream& is, Time&);
    friend ostream &operator << (ostream& os, Time&);
    int Geth();
    int Getm();
    int Gets();
    void GetTime(int&,int&,int&);
    long ConvSec();//chuyen qua dang giay
    Time ConvNormal(long ); //chuyen qua dang thuong;
    Time operator+(const Time& a);
    Time operator++();
    Time operator-(const Time& a);
    Time operator--();
    Time operator--(int);
    Time operator++(int);
    Time ChuanHoa();

};
#endif //INC_4_TIME_H
