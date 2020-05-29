class PhanSo
{
private:
    int tu, mau;
public:
    PhanSo() {tu=0; mau=0;};
    PhanSo(int x,int y) {tu = x; mau = y;};
    void nhap();
    void xuat();
    void cong(PhanSo &a);
    void tru(PhanSo &a);
    void nhan(PhanSo &a);
    void chia(PhanSo &a);
};
