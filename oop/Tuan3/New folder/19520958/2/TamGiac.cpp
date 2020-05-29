//
 // Created by PhamNguyenVietTan on 4/27/2020.
//

#include "TamGiac.h"

istream &operator >> (istream& it, TamGiac& a)
{
    cout<<endl<<"Nhap diem x"<<endl;
    it>> a.x;
    cout<<endl<<"Nhap diem y"<<endl;
    it>> a.y;
    cout<<endl<<"Nhap diem z"<<endl;
    it>> a.z;
}


ostream &operator << (ostream& ot, TamGiac& a)
{
    ot<<"Diem x: " << a.x<<endl;
    ot<<"Diem y: " << a.y<<endl;
    ot<<"Diem z: " << a.z<<endl;
}