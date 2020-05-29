
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void Loang (long a[], int first, int last, int n)
{
    int res;
    res=1;
    while (true)
    {
        if( (first> 0) && (a[first] == a[first-1]))
        {first--;
            res = 1;}
        else res = 0;

        if (!(res)) break;
    }
    cout << first<<endl;
}

long Tim(long a[], int n,long num)
{
    int privot,first,last;
    first=0;
    last=n-1;
    privot = (first+last)/2;
    int res = 0 ;
    while (first <=last)
    {
        if (a[privot]<num)
            first = privot + 1 ;
        else
        if(a[privot] == num)
        {
            first = last = privot;
            Loang(a, first, last, n);
            res=1;
            break;
        }
        else
            last = privot -1;
        privot = ( first + last ) / 2;
    }
    if (!res) cout<<-1<<endl;
    return true;
}
int main()
{
    long* a = new long[1000000];
    long  n,num,k;

    cin>>n;

    for (int i=0;i<n;i++)
        cin>>a[i];
    //cout<<"K="<<k;
    cin>>k;
    for ( int i=0; i<k;i++)
    {
        cin>>num;
        Tim(a,n,num);
    }

    return 0;

}