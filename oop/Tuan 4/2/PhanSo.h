#include <iostream>
using namespace std;
class PhanSo
{
private:
    int tu, mau;
public:
    PhanSo() {tu=0; mau=0;};
    PhanSo(int x,int y) {tu = x; mau = y;};
    void RutGon();
    PhanSo operator + (const PhanSo &a);
    PhanSo operator - (const PhanSo &a);
    PhanSo operator * (const PhanSo &a);
    PhanSo operator / (const PhanSo &a);
    bool operator == (PhanSo a);
    bool operator = (const PhanSo &a);
    bool operator != (PhanSo a);
    bool operator ! ();
    friend istream& operator >> (istream &in , PhanSo &a);
    friend ostream& operator << (ostream& out,PhanSo &a);
};
