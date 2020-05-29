#include <iostream>
#include "PhanSo.h"
using namespace std;
int UCLN(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
};

void PhanSo::RutGon()
{
    int ThuaSoChung;
    ThuaSoChung = UCLN(tu,mau);

    tu /= ThuaSoChung;
    mau /= ThuaSoChung;

};
bool PhanSo::operator == ( PhanSo a)
{
    PhanSo temp(this->tu, this->mau);
    temp.RutGon();
    a.RutGon();
    if (temp.tu == a.tu)
        if(temp.mau == a.mau)
            return true;
    return false;
}
bool PhanSo::operator = (const PhanSo &a)
{
    tu=a.tu;
    mau=a.mau;
    return 1;
};
bool PhanSo::operator != ( PhanSo a)
{
    PhanSo tmp(this->tu,this->mau);
    return !(tmp == a);
};
bool PhanSo::operator ! ()
{
    return !(tu);
};

istream& operator >> (istream &in , PhanSo &a)
{
    cout << "Nhap lan luot tu va mau cua phan so : ";
    in >> a.tu >> a.mau;
}
ostream& operator << (ostream& out,PhanSo &a)
{
    out << a.tu << "/" << a.mau << endl;
}
PhanSo PhanSo::operator + (const PhanSo &a)
{
    PhanSo tmp;
    tmp.tu = tu * a.mau + mau * a.tu;
    tmp.mau = mau * a.mau;
    tmp.RutGon();
    return tmp;
}
PhanSo PhanSo::operator - (const PhanSo &a)
{
    PhanSo tmp;
    tmp.tu = tu * a.mau - mau * a.tu;
    tmp.mau = mau * a.mau;
    tmp.RutGon();
    return tmp;
}
PhanSo PhanSo::operator * (const PhanSo &a)
{
    PhanSo tmp;
    tmp.tu = tu * a.tu;
    tmp.mau = mau * a.mau;
    tmp.RutGon();
    return tmp;

}
PhanSo PhanSo::operator / (const PhanSo &a)
{
    PhanSo tmp;
    tmp.tu = tu * a.mau;
    tmp.mau = mau * a.tu;
    tmp.RutGon();
    return tmp;
}