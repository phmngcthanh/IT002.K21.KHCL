#include<iostream>
#include"CVector.h"
#include"CMatrix.h"
using namespace std;
int main(){
    cout<<"----Vector----"<<endl;
    CVector Vt1,Vt2;
    cout<<"Input Vector1: ";
    cin>>Vt1;
    cout<<"Input Vector2: " ;
    cin>>Vt2;
    CVector sum,sub,multi,multiK;
    sum=Vt1+Vt2;
    sub=Vt1-Vt2;
    multi=Vt1*Vt2;
    multiK=Vt2*5;
    cout<<"Vt1 : "<<Vt1<<endl;
    cout<<"Vt2 : "<<Vt2<<endl;
    cout<<"Vt1 + Vt2 = "<<sum<<endl;
    cout<<"Vt1 - Vt2 = "<<sub<<endl;
    cout<<"Vt1 * Vt2 = "<<multi<<endl;
    cout<<"Vt2*5 = "<<multiK<<endl<<endl;
    cout<<"----Matrix----"<<endl;
    cout<<"Input Matrix1: ";
    CMatrix MT1,MT2;
    cin>>MT1;
    cout<<"Input Matrix2: " ;
    cin>>MT2;
    CMatrix SumM,SubM,MultiM,MultiMK;
    cout<<"MT1 : \n"<<MT1<<endl;
    cout<<"MT2 : \n"<<MT2<<endl;
    SumM = MT1+MT2;
    cout<<"MT1 + MT2 = \n"<<SumM<<endl;
    SubM = MT1-MT2;
    cout<<"MT1 - MT2 = \n"<<SubM<<endl;
    MultiM = MT1*MT2;
    cout<<"MT1 * MT2 = \n"<<MultiM<<endl;
    MultiMK = MT2*5;
    cout<<"MT2*5 = \n"<<MultiMK<<endl<<endl;
   cout<<"MT1 * Vt1 : "<<endl;
   cout<<"MT1: \n"<<MT1;
   cout<<"Vt1 : \n"<<Vt1<<endl;
   CMatrix MT;
   MT=MT1*Vt1;
   cout<<MT;
    return 0;
}