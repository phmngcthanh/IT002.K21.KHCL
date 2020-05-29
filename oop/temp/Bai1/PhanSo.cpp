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
struct DB{
	PhanSo Val;
	PhanSo Real;
}

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

void PhanSo::nhap()
{
    std::cout<<std::endl<<" nhap tu so ";
    std::cin>>tu;

    std::cout<<std::endl<<" nhap mau so ";
    std::cin>>mau;
};

void PhanSo::QuyDong(PhanSo &a)
{
    int MauChung;
    MauChung= a.mau*mau;

    a.tu*=mau;
    tu*=a.mau;

    a.mau=MauChung;
    mau=MauChung;
};

void PhanSo::RutGon()
{
    int ThuaSoChung;
    ThuaSoChung = UCLN(tu,mau);

    tu /= ThuaSoChung;
    mau /= ThuaSoChung;

};

void PhanSo::xuat()
{	PhanSo a(tu,mau);
    a.RutGon();

    std::cout<<a.tu<<"/" <<a.mau<<std::endl;
};

void PhanSo::TinhTich(PhanSo a)
{
    PhanSo Tich;
    Tich.tu = a.tu * tu;
    Tich.mau = a.mau * mau;
    std::cout<< "Tich cua hai phan so la ";
    Tich.xuat();
};

void PhanSo::TinhTong(PhanSo a)
{
    PhanSo Tong;
    PhanSo b(tu,mau);
    a.QuyDong(b);

    Tong.tu= a.tu + b.tu;
    Tong.mau= a.mau;

    std::cout<< "Tong cua hai phan so la ";

    Tong.xuat();
};

void PhanSo::TinhHieu(PhanSo a)
{
    PhanSo Hieu;
    PhanSo b(tu,mau);
    a.QuyDong(b);

    Hieu.tu=a.tu-b.tu;
    Hieu.mau=a.mau;

    std::cout<< "Hieu cua hai phan so la ";

    Hieu.xuat();
};

void PhanSo::TinhThuong(PhanSo a)

{
    PhanSo Thuong;
    PhanSo b(tu,mau);
    Thuong.tu=a.tu*b.mau;
    Thuong.mau=a.mau*b.tu;

    std::cout<< "Thuong cua hai phan so la ";

    Thuong.xuat();
};
