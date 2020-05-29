//
 // Created by ThanhPN on 4/28/2020.
//
#include "CTime.h"
 istream &operator >> (istream& is, CTime& a)
{
    cout<<" nhap gio: "<<endl;
    is>>a.h;
    cout<<" nhap phut: "<<endl;
    is>>a.m;
    cout<<" nhap giay: "<<endl;
    is>>a.s;
}
long CTime::ConvSec()
{
    return (h*3600+m*60+s);
};//chuyen qua dang giay
CTime CTime::ConvNormal(long a)
{
    CTime x;

    x.h= (a/3600);
    a=a%3600;

    x.m=(a/60);
    a=a%60;
    x.s=a;
    return x;
    ;
};

 ostream &operator << (ostream& os, CTime& a )
{
    os<<"h: "<<a.h<<" m: "<<a.m<<" s: "<<a.s<<endl;
};
int CTime::Geth()
{return h;}
int CTime::Getm()
{return m;}

int CTime::Gets()
{return s;}
CTime CTime:: ChuanHoa()
{
    return this->ConvNormal(h*3600+m*60+s);
}
void CTime::GetCTime(int& gio ,int& phut ,int& giay)
{
    gio=h;
    phut = m;
    giay = s;
}
CTime CTime::operator+(const CTime& a)
{
    CTime b;
    b.s=s+a.s;
    b.h=h+a.h;
    b.m=m+a.m;
    return b.ConvNormal(b.h*3600+b.m*60+b.s);
}
CTime CTime::operator++()
{
    s=s+1;
    return this->ConvNormal(h*3600+m*60+s);
}
CTime CTime::operator++(int)
{
    s=s+1;
    return this->ConvNormal(h*3600+m*60+s);
}
CTime CTime::operator-(const CTime& a)
{
    CTime b;
    b.s= s-a.s;
    b.m= m-a.m;
    b.h= h-a.h;
    return b.ConvNormal(b.h*3600+b.m*60+b.s);
}
CTime CTime::operator--()
{
    s=s-1;
    return this->ConvNormal(h*3600+m*60+s);
}
CTime CTime::operator--(int)
{
    s=s-1;
    return this->ConvNormal(h*3600+m*60+s);
}