#include <iostream>
using namespace std;

int compare (const void * a, const void * b)
{
    return ( *(long*)a - *(long*)b );
}
void Loang (long a[], int first, int last, int n)
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
    cout << (first)<<" "<<(n-1-last);
}
int NIA (long a[], int priv,long num,int n)
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
int doNIA (long a[], int priv,long num,int n)
{
    int res;
    if ((priv ==0)&&(a[priv]>num))
            cout<<0<<" "<<n;
    else
    if  ((a[priv]>num)&&(a[priv-1]<num))
        cout<<priv<<" "<< n-priv;
    else
    if (((a[priv]<num)&&(a[priv+1]>num)))
        cout<<priv +1<<" "<<n-1-priv;
    else
    if ((priv == (n-1)) &&(a[priv]<num))
            cout<<n<<" "<<0;
    else return 0;

    return 1;
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
        if (doNIA(a,privot,num,n))
            break;
        else
        if (a[privot]<num)
            first = privot + 1 ;
        else
        if(a[privot] == num)
            {   first = last = privot;
                Loang(a, first, last, n);
            break;}
            else
                last = privot -1;
        privot = ( first + last ) / 2;
    }

    return true;
}
int main() {
    long* a = new long[1000000];
    long  n,num,k;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(long),compare);
    cin>>k;
    //cout<<"K="<<k;
    for ( int i=0; i<k;i++)
    {
        cin>>num;
        Tim(a,n,num);
    }

    return 0;

}
