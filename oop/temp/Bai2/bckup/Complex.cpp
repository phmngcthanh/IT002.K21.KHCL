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
float Complex::Abs()
{
    return (sqrt((RealPart * RealPart) + (ImgPart * ImgPart))) ;
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