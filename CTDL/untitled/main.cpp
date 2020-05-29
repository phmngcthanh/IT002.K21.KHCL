
#include <fstream>
#include <iostream>
#include "md5.h"
#include <string>
using namespace std;   // std::cout

int main(int argc, char *argv[])
{
    ifstream inFile;
    string s,s1,s2,s3;
    long i=0;
    s1="tjctf{";
    s3="}";
    inFile.open("rockyou.txt");
    long n=9;
    while (s2<"aaaa")
    {   s=s1+s2+s3;
        i++;
        if (i%100 == 0)
            cout<<"lan thu "<<i<<" - "<<s<<endl;

           cout<<s;

    }

   return 0;
}