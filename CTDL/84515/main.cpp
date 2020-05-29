#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    for (int a=0;a<8;a++)
        for (int b=0;b<8;b++)
        for (int c=0;c<8;c++)
        for (int d=0;d<8;d++)
        {

         if ((a+b+c+d)==7)
        {
            cout<<a<<b<<c<<d<<endl;
            cout<<((a*4)+(b*3)+(c*2)+(d))<<endl;
         if (((a*4)+(b*3)+(c*2)+(d))==31)
        cout<<"found"<<a<<b<<c<<d;}}
    cout << "Hello world!" << endl;
    return 0;
}
