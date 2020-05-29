#include <iostream>
using namespace std;
int kiemtradoixung(int a[], int n)
{ for(int i=0; i<n/2; i++)
 { if( a[i]!=a[n-i-1]) return 0;
}return 1;

}
int main()
{ int a[5] = {3, 5, 1, 5, 3};
 int n=5;
 if(kiemtradoixung(a,n)==1)
 cout<<"Mang doi xung";
 else cout<<"Mang khong doi xung";
}
