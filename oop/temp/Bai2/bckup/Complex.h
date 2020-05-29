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
    float Abs();
    Complex Add(Complex);
    Complex Subtract(Complex);
    Complex Multiply(Complex);
    Complex Divide(Complex);
};


#endif //LLL_SOPHUC_H
