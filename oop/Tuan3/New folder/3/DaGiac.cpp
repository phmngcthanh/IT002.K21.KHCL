//
// Created by ThanhPN on 4/27/2020.
//

#include "DaGiac.h"

istream &operator >> (istream& it, DaGiac& a)
{
    cout<<" Nhap so luong dinh da giac";
    cin>>a.n;
    for (int i=0;i<a.n;i++)
    {
        cout<<endl<<"Nhap diem "<<i<<endl;
        it>> a.P[i];
    }
}


ostream &operator << (ostream& ot, DaGiac& a)
{
    for (int i=0;i<a.n;i++)
    {
        ot<<endl<<"Diem "<<i<<endl;
        ot<< a.P[i];
    }
}