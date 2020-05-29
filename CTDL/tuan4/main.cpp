#include <iostream>
using namespace std;
class PhanSo
{
private:
    int tu;
    int mau;
public:
    bool nhap(PhanSo&);
    void RutGon();
    void xuat();
    bool operator == (const PhanSo&);
};
int floatcomp(const void* elem1, const void* elem2)
{
    if(*(const float*)elem1 < *(const float*)elem2)
        return -1;
    return *(const float*)elem1 > *(const float*)elem2;
}
bool PhanSo::operator == (const PhanSo& a)
{
    if (a.mau == mau)
        if (a.tu == tu)
            return true;
    return false;
}
struct DB{
    PhanSo Val;
    PhanSo Real;
};
DB arr[1000000];
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
bool PhanSo::nhap(PhanSo& R)
{
    std::cin>>tu;
    std::cin>>mau;
    if (mau==0)
        return 0;
    R.tu=tu;
    R.mau=mau;
    R.RutGon();
    return 1;
};


void PhanSo::xuat()
{	std::cout<<tu<<"/" <<mau<<" ";
};

void lins(DB a,int n)
{
    int i=0;
    int res = 0;
    for (i=0;i<n;i++)
        if (arr[i].Val == a.Val)
        {res =1;
        break;}
    if (res)
    {
        cout<<"Cac phan so bang ";
        a.Real.xuat();
        cout<<"co trong danh sach la: ";
        for (i;i<n;i++)
            if (arr[i].Val == a.Val)
                arr[i].Real.xuat();

    }
    else
        {
            cout<<"Khong co phan so nao bang ";
            a.Real.xuat();
            cout<<"trong danh sach.";
        }

}
int main()
{
    int i=0;
    int res,n=0;
    while (true)
    {
        res=arr[i].Real.nhap(arr[i].Val);
        if(!res)
            break;
        i++;
        n=i;
    }
    if (n==0) {cout<<"Danh sach rong."; return 0;}
        else
    { cout<<"Danh sach vua nhap la: ";
    for (int i  =0;i<n;i++)
    {
            arr[i].Real.xuat();
    }}
    DB pr;
    pr.Real.nhap(pr.Val);
    qsort(arr,0,n,floatcomp);
    lins(pr,n);
}