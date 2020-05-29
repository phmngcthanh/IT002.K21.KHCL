#include <iostream>
using namespace std;

void Loang (long a[], int first, int last, int n) {
    int res, res1;
    res = 1;
    while (true) {
        if ((first > 0) && (a[first] == a[first - 1])) {
            first--;
            res = 1;
        } else res = 0;
        if (!(res)) break;
    }
    cout << (n - first) << endl;
}
int doNIA (long a[], int priv,long num,int n)
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
long Tim(long a[], int n,long num)
{
    int privot,first,last;
    first=1;
    last=n-1;
    privot = (first+last)/2;
    int res = 0 ;
    while (first <=last)
    {

        if ((a[privot]<num) && (a[privot+1]<=num))
            first = privot + 1 ;
        else if ((a[privot]>num) && (a[privot-1]>=num))
            last = privot -1;
        else
        if(a[privot] == num)
        {
            first = last = privot;
            Loang(a, first, last, n);
            break;
        }
        else
        if (doNIA(a,privot,num,n))
            break;
        privot = ( first + last ) / 2;

    }
cout<<0;
    return true;
}
int main()
{
    long* a = new long[1000000];
    long  n,num,k;
    a[0]=-1;
    cin>>n;
    cin>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    //cout<<"K="<<k;
    for ( int i=0; i<k;i++)
    {
        cin>>num;
        Tim(a,n,num);
    }

    return 0;

}
