#include"CMatrix.h"
#include<iostream>
using namespace std;
CMatrix::CMatrix(){
     Rows=Columns=0;
}
CMatrix::CMatrix(int m,int n){
    Rows=m;
    Columns=n;
    VT.resize(Rows);
    for(int i=0;i<Rows;i++){
        VT[i].resize(Columns);
        for(int j=0;j<Columns;j++){
            VT[i][j]=0;
        }
    }
}
CMatrix::~CMatrix(){
}
CMatrix CMatrix::operator+(const CMatrix & MT){
    if(Rows!=MT.Rows||Columns!=MT.Columns){
        cout<<"2 matrix are not compatible!"<<endl;
        return *this;
    }
    CMatrix res;
    res=*this;
    for(int i=0;i<Rows;i++){
        for(int j=0;j<Columns;j++){
            res.VT[i][j]+=MT.VT[i][j];
        }
    }
    return res;
}
CMatrix CMatrix::operator-(const CMatrix & MT){
    if(Rows!=MT.Rows||Columns!=MT.Columns){
        cout<<"2 matrix are not compatible!"<<endl;
        return *this;
    }
    CMatrix res;
    res=*this;
    for(int i=0;i<Rows;i++){
        for(int j=0;j<Columns;j++){
            res.VT[i][j]-=MT.VT[i][j];
        }
    }
    return res;
}
CMatrix CMatrix::operator*(const CMatrix & MT){
    if(Columns!=MT.Rows){
     cout<<"2 matrix are not compatible!"<<endl;
        return *this;   
    }
    CMatrix res(Rows,MT.Columns);
    for(int i=0;i<Rows;i++){
        for(int j=0;j<MT.Columns;j++){
            for(int k=0;k<Columns;k++){
                res.VT[i][j]+=this->VT[i][k]*MT.VT[k][j];
            }
        }
    }
    return res;
}
CMatrix CMatrix::operator*(const int k){
    for(int i=0;i<Rows;i++){
        for(int j=0;j<Columns;j++){
            this->VT[i][j]*=k;
        }
    }
    return *this;
}
CMatrix CMatrix::operator*(CVector & vt){
    CMatrix VT_To_MT(1,vt.GetLength());
    for(int i=0;i<VT_To_MT.Columns;i++){
        VT_To_MT.VT[0][i]=vt[i];
    }
    return *this*VT_To_MT;
}
ostream & operator<<(ostream & os,const CMatrix& MT){
    for(int i=0;i<MT.Rows;i++){
        for(int j=0;j<MT.Columns;j++){
            os<<MT.VT[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}
istream & operator>>(istream & is,CMatrix& MT){
    cout<<"Input row and column: ";
    is>>MT.Rows>>MT.Columns;
    MT.VT.resize(MT.Rows);
    for(int i=0;i<MT.Rows;i++){
        MT.VT[i].resize(MT.Columns);
        for(int j=0;j<MT.Columns;j++){
            is>>MT.VT[i][j];
        }
    }
    return is;
}