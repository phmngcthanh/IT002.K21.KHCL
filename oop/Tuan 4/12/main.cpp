
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
ostream & operator<<(ostream & os,const char * str){
    os<<(string)"Entering the Hello program saying..."<<endl;

        os<<(string)str;

    os<<(string)"Then exiting...";
    return os;
}
int main(){
    cout << "Hello, world.\n";
    return 0;
}
