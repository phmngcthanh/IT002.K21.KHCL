#include<iostream>
#include"DaThuc.h"
using namespace std;
int main(){
    DaThuc DT1;
    DaThuc DT2;
    cout<<"Set to DT1: "<<endl;
    cin>>DT1;
    cout<<"Set to DT2: "<<endl;
    cin>>DT2;
    cout<<"abc"<<endl;
    DaThuc AddDT=DT1+DT2;
    cout<<"ADD DT1 and DT2: "<<AddDT<<endl;
    DaThuc SubDT=DT1-DT2;
    cout<<"Sub DT1 adn DT2: "<<SubDT<<endl;
    DaThuc MultiDT=DT1*DT2;
    cout<<"MulDT1 and DT2: "<<MultiDT<<endl;
    return 0;
}