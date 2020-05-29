#include <iostream>
using namespace std;

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
long BinSearch(long a[], long n,long num)
{
    long privot,first,last;
    first=0;
    last=n-1;
    privot = (first+last)/2;
    while (first <=last)
    {
        if (a[privot]<num)
            first = privot + 1 ;
        else
            if(a[privot] == num)
                return privot;
            else
                last = privot -1;
        privot =( first + last ) / 2;
    }
    return -1;
}
int main() {
    long  n,num,k;
    long a[100000];
    cin>>n;
    for (long i=0;i<n;i++)
        cin>>a[i];
    for (long i=0;i<n;i++)
        cout<<a[i];
    qsort(a,n,sizeof(long),compare);
    cin>> num;
    cout<< BinSearch(a,n,num);

    return 0;

}
