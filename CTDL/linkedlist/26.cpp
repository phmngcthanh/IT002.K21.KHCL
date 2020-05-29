#include <iostream>
using namespace std;

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
void Loang (long a[], int& first, int& last, int n)
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
}
long Tim(long a[], int n,long num)
{
    int privot,first,last;
    first=0;
    last=n-1;
    privot = (first+last)/2;
    while (first <=last)
    {
        if (a[privot]<num)
            first = privot + 1 ;
        else
            if(a[privot] == num)
                break;
            else
                last = privot -1;
        privot =( first + last ) / 2;
    }
    first = last = privot;
    if(a[privot] != num)
        return -1;
    else
        Loang(a,first,last,n);
    return (last - first +1);
}
int main() {
    long* a = new long[1000000];
    long  n,num,k;
    cin>>n;
    for (long i=0;i<n;i++)
        cin>>a[i];
    for (long i=0;i<n;i++)
        cout<<a[i];
    qsort(a,n,sizeof(long),compare);
    cin>> num;
    cout<< Tim(a,n,num);

    return 0;

}
