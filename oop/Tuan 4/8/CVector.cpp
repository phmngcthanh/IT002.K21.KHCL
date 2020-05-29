#include"CVector.h"
#include<iostream>
using namespace std;
CVector::CVector(){
    int n=0;
}
CVector::CVector(int n){
    VT.resize(n);
    Length=n;
    for(int i=0;i<Length;i++){
        VT[i]=0;
    }
}
CVector::~CVector(){
}
CVector CVector::operator+(const CVector & vt ){
    if(this->Length!=vt.Length){
        cout<<"Not the same lenght!"<<endl;
        return *this;
    }
    CVector res;
    res=*this;
    for(int i=0;i<Length;i++){
        res.VT[i]+=vt.VT[i];
    }
    return res;
}
CVector CVector::operator-(const CVector & vt){
   if(this->Length!=vt.Length){
        cout<<"Not the same lenght!"<<endl;
        return *this;
    }
    CVector res;
    res=*this;
    for(int i=0;i<Length;i++){
        res.VT[i]-=vt.VT[i];
    }
    return res; 
}
CVector CVector::operator*(const CVector & vt){
    if(this->Length!=vt.Length){
        cout<<"Not the same lenght!"<<endl;
        return *this;
    }
    CVector res;
    res=*this;
    for(int i=0;i<Length;i++){
        res.VT[i]*=vt.VT[i];
    }
    return res;
}
CVector CVector::operator*(const int k){
    CVector res;
    res=*this;
    for(int i=0;i<Length;i++){
        res.VT[i]*=k;
    }
    return res;
}
ostream & operator<<(ostream & os,const CVector& vt){
    os<<"( ";
    for(int i=0;i<vt.Length;i++){
        if(i!=vt.Length-1)
            os<<vt.VT[i]<<" , ";
        else{
            os<<vt.VT[i];
        }
    }
    os<<" )";
    return os;
}
istream & operator>>(istream & is,CVector& vt){
    cout<<"Input Length: ";
    is>>vt.Length;
    vt.VT.resize(vt.Length);
    cout<<"Input element: "<<endl;
    for(int i=0;i<vt.Length;i++){
        is>>vt.VT[i];
    }
    return is;
}
double CVector::operator[](int i){
    return VT[i];
}
int CVector::GetLength(){
    return Length;
}
