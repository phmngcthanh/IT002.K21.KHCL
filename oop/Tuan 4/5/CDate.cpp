//
// Created by ThanhPN on 5/26/2020.
//

#include "CDate.h"

int CDate::ConvToDay()
{
    int day=0;
    CDate tmp=(*this);
    while ((tmp.d>0)||(tmp.m>0)||(tmp.y>0))
    {
        day++;
        --tmp;
    }
    return day;
}
int CDate::MaxDay()
//return max day in month
{
    int nhuan =0;
    int maxd=0;
    if( ( y % 400 == 0 )|( ( y&4 == 0 )&( y%100 != 0 ) ) )
        nhuan = 1;
    if ( ( ( m<8 )&( m%2 != 0 ) ) | ( m>7 )&( ( m<13 )&( m%2 == 0 ) ) )
    {maxd = 31;  }
    else {if ( ( m == 2 )&( nhuan == 1 ) )
            maxd = 29;
        else {if ( ( m == 2 )&( nhuan == 0 ) )
                maxd = 28;
            else
                maxd = 30;  }}
    return maxd;
}
int  CDate::CheckLegit()
{
    if ( (m >12 )||(m<1))
    { cout<<"wrong"; return 0;}
    if (( d > ((*this).MaxDay()) )||(d<1))
            return 0;
    return 1;
};


istream& operator >> (istream& cn, CDate& a)
{
    int n = 0;

    while ( !n )
    {
        std::cout<<"nhap ngay"<<std::endl;
        cn >>a.d;
        std::cout<<"nhap thang"<<std::endl;
        cn >>a.m;
        std::cout<<"nhap nam"<<std::endl;
        cn >>a.y;
        n =  a.CheckLegit();
        if(!n) cout<<"wrong";
    }
};
ostream& operator << (ostream& ct,CDate& a)
{
    ct<<"ngay "<<a.d <<" thang "<<a.m<<" nam "<<a.y;
};
bool CDate::operator =(const CDate& a)
{
    y=a.y;
    m=a.m;
    d=a.d;
    return 1;
}

CDate CDate::operator +(int x)
{
    CDate a;
    a.d=d;
    a.m=m;
    a.y=y;
    int k=a.d+x;
    do{
        switch(a.m)
        {
            case 1:case 3:case 5: case 7:case 8: case 10: case 12:
                if(k>31)
                {
                    a.m++;
                    if(a.m==13)
                    {
                        a.m=1;
                        a.y++;
                    }
                    k-=31;
                }
                else
                {
                    a.d=k;
                    k=0;
                }
                break;
            case 4:case 6: case 9: case 11:
                if(k>30)
                {
                    a.m++;
                    k-=30;
                }
                else
                {
                    a.d=k;
                    k=0;
                }
                break;
            case 2:
                if(a.y%400==0 || (a.y%4==0 && a.y%100!=0))
                {
                    if(k>29)
                    {
                        a.m++;
                        k-=29;
                    }
                    else
                    {
                        a.d=k;
                        k=0;
                    }
                }
                else
                {
                    if(k>28)
                    {
                        a.m++;
                        k-=28;
                    }
                    else
                    {
                        a.d=k;
                        k=0;
                    }
                }
                break;
        }
    }while(k>0);
    return a;
};
long long CDate::operator - (CDate &cd)
{
    CDate x;
    x.d=d;
    x.m=m;
    x.y=y;
    long long a=x.d;
    do{
        switch(x.m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                a+=31;
                x.m--;
                if(x.m==0)
                {
                    x.y--;
                    x.m=12;
                }
                break;
            case 4: case 6: case 9: case 11:
                a+=30;
                x.m--;
                break;
            case 2:
                if(x.y%400==0 || (x.y%4==0 && x.y%100!=0))
                {
                    a+=29;
                    x.m--;
                }
                else
                {
                    a+=28;
                    x.m--;
                }
        }
    }while(x.y>0);

    x.d=cd.d;
    x.m=cd.m;
    x.y=cd.y;
    long long b=x.d;
    do{
        switch(x.m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                b+=31;
                x.m--;
                if(x.m==0)
                {
                    x.y--;
                    x.m=12;
                }
                break;
            case 4: case 6: case 9: case 11:
                b+=30;
                x.m--;
                break;
            case 2:
                if(x.y%400==0 || (x.y%4==0 && x.y%100!=0))
                {
                    b+=29;
                    x.m--;
                }
                else
                {
                    b+=28;
                    x.m--;
                }
        }
    }while(x.y>0);
    return a-b;
};
CDate CDate::operator - (int p)
{
    CDate a;
    a.d=d;
    a.m=m;
    a.y=y;
    int x=p;
    do{
        if(a.d>x)
        {
            a.d-=x;
            x=0;
        }
        else
        {
            x-=a.d;
            a.m--;
            switch(a.m)
            {
                case 1:case 3: case 5: case 7: case 8: case 10:
                    a.d=31;
                    break;
                case 4: case 6: case 9: case 11:
                    a.d=30;
                    break;
                case 2:
                    if(a.y%400==0 || (a.y%4==0 && a.y%100!=0)) a.d=29;
                    else a.d=28;
                    break;
                case 0:
                    a.m=12;
                    a.y--;
                    a.d=31;
                    break;
            }
        }
    }while(x>0);
    return a;
};
CDate  CDate::operator ++()
{
    int maxd = this->MaxDay();
    if( d<maxd )
        d++;
    else{if( m == 12 )
        {
            y++;
            m = 1;
            d = 1;
        }
        else
        {
            m++;
            d = 1;
        }
    }
};
CDate CDate::operator --()
{
    int maxd = this->MaxDay();
    if (d>1)
    {
        d--;
    }
    if(d==1)
    {
        if (m==1)
        {
            m=12;
            y--;
            d=maxd;
        }
        if(m>1)
        {
            m--;
            d=maxd;
        }
    }
};
double CDate::LoiNhuan(CDate Date)
{
    double LSuat, TienGui;
    cout<<"Nhap lai  suat ngan hang theo %";
    cin>> LSuat;
    cout<<"Nhap so tien gui";
    cin>>TienGui;
    LSuat = LSuat/100;
    int SoNgay = (*this)-Date;
    double LNhuan= (1+((double)SoNgay/365)*(LSuat))*TienGui;
    cout<<"Loi nhuan cua "<<(unsigned long long)TienGui<<" dong voi lai suat "<<LSuat*100<<"%"<<endl;
    cout<<"tu ngay " <<(*this)<<" den ngay "<< Date<<endl;
    cout<<"La "<<(unsigned long long)LNhuan<<" dong";

    //for further use
    return LNhuan;
};