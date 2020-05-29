//
// Created by ThanhPN on 4/17/2020.
//

#ifndef UNTITLED_PHANSO_H
#define UNTITLED_PHANSO_H
class PhanSo
{
private:
    int tu;
    int mau;
public:
    void nhap();
    void QuyDong(PhanSo&);
    void RutGon();
    void xuat();
    void TinhTich(PhanSo);
    void TinhTong(PhanSo);
    void TinhHieu(PhanSo);
    void TinhThuong(PhanSo);
    PhanSo(int x,int y) {tu=x;mau = y;};
    PhanSo(){};
};
#endif //UNTITLED_PHANSO_H
