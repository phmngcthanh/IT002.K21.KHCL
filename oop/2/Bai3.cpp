#include <iostream>

struct PhanSo
{
    int tu,mau;
};

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

void nhap(PhanSo& a)
{
    std::cout<<std::endl<<" nhap tu so ";
    std::cin>>a.tu;

    std::cout<<std::endl<<" nhap mau so ";
    std::cin>>a.mau;
};

void QuyDong(PhanSo &a, PhanSo &b)
{
    int MauChung;

    MauChung= a.mau*b.mau;

    a.tu*=b.mau;
    b.tu*=a.mau;

    a.mau=MauChung;
    b.mau=MauChung;
};

void RutGon(PhanSo &a)
{
    int ThuaSoChung;
    ThuaSoChung = UCLN(a.tu,a.mau);

    a.tu /= ThuaSoChung;
    a.mau /= ThuaSoChung;

};

void xuat(PhanSo a)
{
    RutGon(a);

    std::cout<<a.tu<<"/" <<a.mau<<std::endl;
};

PhanSo TinhTich(PhanSo a,PhanSo b)
{
    PhanSo Tich;

    Tich.tu = a.tu * b.tu;
    Tich.mau = a.mau * b.mau;

    std::cout<< "Tich cua hai phan so la ";

    xuat(Tich);
};

PhanSo TinhTong(PhanSo a,PhanSo b)
{
    PhanSo Tong;

    QuyDong(a,b);

    Tong.tu= a.tu + b.tu;
    Tong.mau= a.mau;

    std::cout<< "Tong cua hai phan so la ";

    xuat(Tong);
};

PhanSo TinhHieu(PhanSo a,PhanSo b)
{
    PhanSo Hieu;

    QuyDong(a,b);

    Hieu.tu=a.tu-b.tu;
    Hieu.mau=a.mau;

    std::cout<< "Hieu cua hai phan so la ";

    xuat(Hieu);
};

PhanSo TinhThuong(PhanSo a,PhanSo b)
{
    PhanSo Thuong;

    Thuong.tu=a.tu*b.mau;
    Thuong.mau=a.mau*b.tu;

    std::cout<< "Thuong cua hai phan so la ";

    xuat(Thuong);
};

int main()
{
    PhanSo a,b;
    PhanSo Tong,Hieu,Tich,Thuong;

    nhap(a);
    nhap(b);

    TinhTich(a,b);
    TinhTong(a,b);
    TinhHieu(a,b);
    TinhThuong(a,b);

    return 0;
};