//
 // Created by PhamNguyenVietTan on 4/28/2020.
//
#include "Time.h"
 istream &operator >> (istream& is, Time& a)
{
    cout<<" nhap gio: "<<endl;
    is>>a.h;
    cout<<" nhap phut: "<<endl;
    is>>a.m;
    cout<<" nhap giay: "<<endl;
    is>>a.s;
}
long Time::ConvSec()
{
    return (h*3600+m*60+s);
};//chuyen qua dang giay
Time Time::ConvNormal(long a)
{
    Time x;

    x.h= (a/3600);
    a=a%3600;

    x.m=(a/60);
    a=a%60;
    x.s=a;
    return x;
    ;
};

 ostream &operator << (ostream& os, Time& a )
{
    os<<"h: "<<a.h<<" m: "<<a.m<<" s: "<<a.s<<endl;
};
int Time::Geth()
{return h;}
int Time::Getm()
{return m;}

int Time::Gets()
{return s;}
Time Time:: ChuanHoa()
{
    return this->ConvNormal(h*3600+m*60+s);
}
void Time::GetTime(int& gio ,int& phut ,int& giay)
{
    gio=h;
    phut = m;
    giay = s;
}
Time Time::operator+(const Time& a)
{
    Time b;
    b.s=s+a.s;
    b.h=h+a.h;
    b.m=m+a.m;
    return b.ConvNormal(b.h*3600+b.m*60+b.s);
}
Time Time::operator++()
{
    s=s+1;
    return this->ConvNormal(h*3600+m*60+s);
}
Time Time::operator++(int)
{
    s=s+1;
    return this->ConvNormal(h*3600+m*60+s);
}
Time Time::operator-(const Time& a)
{
    Time b;
    b.s= s-a.s;
    b.m= m-a.m;
    b.h= h-a.h;
    return b.ConvNormal(b.h*3600+b.m*60+b.s);
}
Time Time::operator--()
{
    s=s-1;
    return this->ConvNormal(h*3600+m*60+s);
}
Time Time::operator--(int)
{
    s=s-1;
    return this->ConvNormal(h*3600+m*60+s);
}