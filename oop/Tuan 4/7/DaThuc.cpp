#include<iostream>
#include"DaThuc.h"
#include<cmath>
using namespace std;
DaThuc::DaThuc(){
    this->NumberOfElement=0;
    this->x=new double[0+1];
    for(int i=0;i<=this->NumberOfElement;i++){
        this->x[i]=0;
    }
}
DaThuc::DaThuc(int n){
    this->NumberOfElement=n;
    this->x=new double[NumberOfElement+1];
    for(int i=0;i<=this->NumberOfElement;i++){
        this->x[i]=0;
    }
}
DaThuc::DaThuc(const DaThuc & DT){
    this->NumberOfElement=DT.NumberOfElement;
    delete [] this->x;
    this->x = new double[NumberOfElement+1];
    for(int i=0;i<=this->NumberOfElement;i++){
        this->x[i]=DT.x[i];
    }
}
DaThuc & DaThuc::operator=(const DaThuc & DT){
    if(&DT==this){
        return *this;
    }
    this->NumberOfElement=DT.NumberOfElement;
    delete [] this->x;
    this->x = new double[NumberOfElement+1];
    for(int i=0;i<=this->NumberOfElement;i++){
        this->x[i]=DT.x[i];
    }
    return *this;
}
DaThuc operator+(const DaThuc & DT1,const DaThuc & DT2){
    DaThuc DT((DT1.NumberOfElement>DT2.NumberOfElement)? DT1.NumberOfElement:DT2.NumberOfElement);
    for(int i=0;i<=DT.NumberOfElement;i++){
        if(i<=DT1.NumberOfElement&&i<=DT2.NumberOfElement){
            DT.x[i]=DT1.x[i]+DT2.x[i];
        }
        else{
            if(i>DT1.NumberOfElement){
                DT.x[i]=DT2.x[i];
            }
            else if(i>DT2.NumberOfElement){
                DT.x[i]=DT1.x[i];
            }
            else{
            }
        }
    }
    return DT;
}
DaThuc operator-(const DaThuc & DT1,const DaThuc & DT2){
    DaThuc DT((DT1.NumberOfElement>DT2.NumberOfElement)? DT1.NumberOfElement:DT2.NumberOfElement);
    for(int i=0;i<=DT.NumberOfElement;i++){
        if(i<=DT1.NumberOfElement&&i<=DT2.NumberOfElement){
            DT.x[i]=DT1.x[i]-DT2.x[i];
        }
        else{
            if(i>DT1.NumberOfElement){
                DT.x[i]=-DT2.x[i];
            }
            else if(i>DT2.NumberOfElement){
                DT.x[i]=DT1.x[i];
            }
            else{}
        }
    }
    return DT;
}
DaThuc operator*(const DaThuc & DT1,const DaThuc & DT2){
    DaThuc DT(DT1.NumberOfElement+DT2.NumberOfElement);
    for(int i=0;i<=DT1.NumberOfElement;i++){
        for(int j=0;j<=DT2.NumberOfElement;j++){
            DT.x[i+j]+=DT1.x[i]*DT2.x[j];
        }
    }
    return DT;
}
ostream & operator<<(ostream &os,DaThuc & DT){
    for(int i=DT.NumberOfElement;i>=0;i--){
        if(DT.x[i]!=0){
            if(DT.x[i]>0){
                if(i!=DT.NumberOfElement&&DT.PreAllZero(i)==0){
                    os<<" + ";
                }
            }
            else{
                os<<" - ";
            }
            if(abs(DT.x[i])!=1){
                os<<abs(DT.x[i]);
            }
            if(i==1){
                os<<"X";
            }
            else if(i==0){
            }
            else{
                os<<"X^"<<i;
            }
        }
    }
    return os;
}
istream & operator>>(istream& is,DaThuc & DT){
    delete [] DT.x;
    cout<<"Input max exponent: ";
    is>>DT.NumberOfElement;
    cout<<"Input value of each exponnent approach high to low: ";
    DT.x=new double[DT.NumberOfElement+1];
    for(int i=DT.NumberOfElement;i>=0;i--){
        is>>DT.x[i];
    }
    return is;
}
DaThuc::~DaThuc(){
    delete[] this->x;
}