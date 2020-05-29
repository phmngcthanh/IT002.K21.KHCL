#include <iostream>
#include "PhanSo.h"

using namespace std;
int main()
{
    PhanSo a(1,2);
    PhanSo b;
    cin>> b;
    cout<<b;
    PhanSo c;
    c=a+b;
    cout<<c;
    c=a-b;
    cout<<c;
    c=a*b;
    cout<<c;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<!a<<endl;
    c=b;
    cout<<c;

}
