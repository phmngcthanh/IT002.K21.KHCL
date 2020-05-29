#include <iostream>
#include "Complex.h"
int main() {
    Complex a,b,c;
    std::cin>>a;
    std::cin>>b;
    std::cout<<"thuc hien phep cong"<<std::endl;
    c= a +b;
    std::cout<<c;
    std::cout<<"thuc hien phep tru"<<std::endl;

    c= a-b;
    std::cout<<c;
    std::cout<<"thuc hien phep nhan"<<std::endl;

    c= a *b;
    std::cout<<c;
    std::cout<<"thuc hien phep chia"<<std::endl;

    c= a /b;
    std::cout<<c;
    std::cout<<"thuc hien phep bool"<<std::endl;
    std::cout<<(a==b);
    std::cout<<(a!=b);
    std::cout<<!a;
    return 0;
}
