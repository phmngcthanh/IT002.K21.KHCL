//
// Created by ThanhPN on 4/16/2020.
//
#include "Complex.h"

#include <cmath>
void Complex::PrintComplex()
{
 std::cout<<RealPart<<"+"<<ImgPart<<"i"<<std::endl;
}
void Complex::Input()
{
    float x,y;
    std::cin>>x;
    std::cin>>y;
    RealPart=x;
    ImgPart=y;
}

Complex Complex::Add(Complex a)
{
    Complex b;
    b.RealPart= RealPart+a.RealPart;
    b.ImgPart= ImgPart+a.ImgPart;
    return b;
};

Complex Complex::Subtract(Complex a)
{
    Complex b;
    b.RealPart= RealPart-a.RealPart;
    b.ImgPart= ImgPart-a.ImgPart;
    return b;
};

Complex Complex::Multiply(Complex a)
{
    Complex b;
    b.RealPart=RealPart*a.RealPart-ImgPart*a.ImgPart;
    b.ImgPart=RealPart*a.ImgPart+ImgPart*a.RealPart;
    return b;
};
Complex Complex::Divide(Complex a)
{
    Complex  b;
    b.RealPart=(RealPart*a.RealPart+ImgPart*a.ImgPart)/(a.RealPart*a.RealPart+a.ImgPart*a.ImgPart);
    b.ImgPart=(a.RealPart*ImgPart-RealPart*a.ImgPart)/(a.RealPart*a.RealPart+a.ImgPart*a.ImgPart);
    return b;
};

Complex Complex:: operator + (Complex a)
{
    Complex b;
    b.RealPart= RealPart+a.RealPart;
    b.ImgPart= ImgPart+a.ImgPart;
    return b;
};

Complex Complex::operator - (Complex a)
{
    Complex b;
    b.RealPart= RealPart-a.RealPart;
    b.ImgPart= ImgPart-a.ImgPart;
    return b;
};

Complex Complex::operator*(Complex a)
{
    Complex b;
    b.RealPart=RealPart*a.RealPart-ImgPart*a.ImgPart;
    b.ImgPart=RealPart*a.ImgPart+ImgPart*a.RealPart;
    return b;
};
Complex Complex::operator/(Complex a)
{
    Complex  b;
    b.RealPart=(RealPart*a.RealPart+ImgPart*a.ImgPart)/(a.RealPart*a.RealPart+a.ImgPart*a.ImgPart);
    b.ImgPart=(a.RealPart*ImgPart-RealPart*a.ImgPart)/(a.RealPart*a.RealPart+a.ImgPart*a.ImgPart);
    return b;
};
bool Complex::operator ==(const Complex& a)
{
    if (a.RealPart == RealPart)
        if (a.ImgPart == ImgPart)
            return true;
    return false;
}
bool Complex::operator !=(const Complex& a)
{
    if (a.RealPart == RealPart)
        if (a.ImgPart == ImgPart)
            return false;
    return true;
}
bool Complex::operator ! ()
{
    if (RealPart == 0)
        if (ImgPart == 0)
            return true;
    return false;
}
std::istream& operator >> (std::istream &is,Complex& a)
{
    std::cout<<"nhap phan thuc"<<std::endl;
    is>>a.RealPart;
    std::cout<<"nhap phan ao"<<std::endl;
    is>>a.ImgPart;
    return is;
}
std::ostream& operator << (std::ostream &os,Complex& a)
{
    os<<a.RealPart<<"+"<<a.ImgPart<<"i";
    return os;
}