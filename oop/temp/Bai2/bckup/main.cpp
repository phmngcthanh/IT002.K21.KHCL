#include <iostream>
#include "Complex.cpp"
int main() {
    Complex a,b,c;
    a.Input();
    b.Input();
    c= a.Add(b);
    c.PrintComplex();
    c= a.Subtract(b);
    c.PrintComplex();
    c= a.Multiply(b);
    c.PrintComplex();
    c= a.Divide(b);
    c.PrintComplex();
    return 0;
}
