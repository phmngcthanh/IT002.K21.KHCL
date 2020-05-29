#include "PhanSo.cpp"

int main()
{
    PhanSo a,b;
    PhanSo Tong,Hieu,Tich,Thuong;

    a.nhap();
    b.nhap();

    a.TinhTich(b);
    a.TinhTong(b);
    a.TinhHieu(b);
    a.TinhThuong(b);

    return 0;
};