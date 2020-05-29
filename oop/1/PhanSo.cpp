#include <iostream>
#include "PhanSo.h"
using namespace std;
void PhanSo::nhap()
{
    cout << "Nhap lan luot tu va mau cua phan so : ";
    cin >> tu >> mau;
}
void PhanSo::xuat()
{
    cout << tu << "/" << mau << endl;
}
void PhanSo::cong(PhanSo& a)
{
    tu = tu * a.mau + mau * a.tu;
    mau = mau * a.mau;
}
void PhanSo::tru(PhanSo& a)
{
    tu = tu * a.mau - mau * a.tu;
    mau = mau * a.mau;
}
void PhanSo::nhan(PhanSo& a)
{
    tu = tu * a.tu;
    mau = mau * a.mau;
}
void PhanSo::chia(PhanSo& a)
{
    tu = tu * a.mau;
    mau = mau * a.tu;
}