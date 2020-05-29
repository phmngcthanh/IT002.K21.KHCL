
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;





void Loang (long long a[], int first, int last, int n)
{
    int res,res1;
    res=res1=1;
    while (true)
    {
        if( (first> 0) && (a[first] == a[first-1]))
        {first--;
            res = 1;}
        else res = 0;

        if( (last< (n-1)) && (a[last] == a[last+1]))
        {
            last++;
            res1=1;}
        else res1=0;
        if (!(res1+res)) break;
    }
    cout << (n-first)<<endl;
}
int NIA (long long a[], int priv,long num,int n)
{
    if (priv ==0)
        if (a[priv]>num)
            return 2;
    if  ((a[priv]>num)&&(a[priv-1]<num))
        return 3;
    if (((a[priv]<num)&&(a[priv+1]>num)))
        return 4;
    if (priv == (n-1))
        if (a[priv]<num)
            return 5;


    return 0;
}
int doNIA (long long a[], int priv,long long num,int n)
{
    int res;
    if ((priv ==0)&&(a[priv]>num))
        cout<<n<<endl;
    else
    if  ((a[priv]>num)&&(a[priv-1]<num))
        cout<< n-priv<<endl;
    else
    if (((a[priv]<num)&&(a[priv+1]>num)))
        cout<<n-1-priv<<endl;
    else
    if ((priv == (n-1)) &&(a[priv]<num))
        cout<< 0<<endl;
    else return 0;
    return 1;
}
long Tim(long long a[], int n,long long num)
{
    int privot,first,last;
    first=0;
    last=n-1;
    privot = (first+last)/2;
    int res = 0 ;
    while (first <=last)
    {
        if (doNIA(a,privot,num,n))
            break;
        else
        if (a[privot]<num)
            first = privot + 1 ;
        else
        if(a[privot] == num)
        {
            first = last = privot;
            Loang(a, first, last, n);
            break;
        }
        else
            last = privot -1;
        privot = ( first + last ) / 2;
    }

    return true;
}
int main()
{
    long long* a = new long long[1000000];
    long  n,k;
    long long num;
    cin>>n;
    cin>>k;
    for (int i=0;i<n;i++)
        cin>>a[i];
    //cout<<"K="<<k;
    for ( int i=0; i<k;i++)
    {
        cin>>num;
        Tim(a,n,num);
    }

    return 0;

}