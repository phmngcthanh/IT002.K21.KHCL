#include <iostream>
#include "INTEGER.h"
int main() {
    INTEGER x,y;
    cin>>x>>y;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    ++x;--y;
    cout<<x<<" "<<y;    return 0;
}
