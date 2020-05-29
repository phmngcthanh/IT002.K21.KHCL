//
// Created by ThanhPN on 4/27/2020.
//

#include "Point.h"

istream &operator >> (istream& is, Point& pt)
{
    cout<< "nhap toa do x: ";
    is>>pt.x;
    cout<< "nhap toa do y: ";
    is>>pt.y;
}
ostream &operator << (ostream& os, Point& pt)
{
    os<<pt.x<<"."<<pt.y;
}
void Point::Set(int a=1,int b=1)
{
    x=a;
    y=b;
};
int Point::GetX()
{
    return x;
};
int Point::GetY()
{
    return y;
};

