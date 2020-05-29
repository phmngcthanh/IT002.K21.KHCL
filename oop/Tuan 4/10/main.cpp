#include <iostream>
#include "MYINT.h"
int main() {
    MYINT x,y;
    cin>>x>>y;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    ++x;--y;
    cout<<x<<" "<<y;    return 0;
}
