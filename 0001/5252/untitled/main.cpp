#include <iostream>
using namespace std;

void Loang (long long a[], int first, int last, int n)
{
    int res,res1;
    res=res1=0;
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
    cout << (-first + last +1)<<" "<<(first+1)<<" "<<(1+last)<<endl;
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
        if (a[privot]<num)
            first = privot + 1 ;
        else
        if(a[privot] == num)
        {
            first = last = privot;
            res=1;
            Loang(a, first, last, n);
            break;
        }
        else
            last = privot -1;
        privot = ( first + last ) / 2;
    }
     if (!res) cout<<-1;
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
    for ( int i=0; i<k;i++)
    {
        cin>>num;
        Tim(a,n,num);
    }

    return 0;

}
