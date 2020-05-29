
#include "Point.h"

istream &operator >> (istream& is, Point& point)
{
    cout<< "nhap diem x";
    is>>point.x;
    cout<< "nhap diem y";
    is>>point.y;
}
ostream &operator << (ostream& os, Point& point)
{
    os<<point.x<<"."<<point.y;
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

