//
// Created by ThanhPN on 4/16/2020.
//
#include <iostream>

#ifndef LLL_SOPHUC_H
#define LLL_SOPHUC_H
class Complex
{
private:
    float RealPart;
    float ImgPart;
public:
    void PrintComplex();
    void Input();
    Complex Add(Complex);
    Complex Subtract(Complex);
    Complex Multiply(Complex);
    Complex Divide(Complex);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
    bool operator==(const Complex&);
    bool operator!=(const Complex&);
    bool operator!();
    friend std::istream& operator >> (std::istream &,Complex&);
    friend std::ostream& operator << (std::ostream &,Complex&);
};


#endif //LLL_SOPHUC_H
