#include "Diem.h"
void Diem::Nhap()
{
    cin >> x >> y;
}

void Diem::Xuat()
{
    cout << "(" << x << ";" << y << ")"<<endl;
}

void Diem::Getx()
{
    cout << x;
}

void Diem::Gety()
{
    cout << y;
}

void Diem::Setx(double a)
{
    x = a;
}

void Diem::Sety(double b)
{
    y = b;
}

void Diem::Movexy(double c)
{
    x = x + c;
    y = y + c;
}
double Diem::KhoangCach(const Diem& t) {
    return sqrt(pow(x - t.x, 2) + pow(y - t.y, 2));
}

void Diem::Quay(const double& rad) {
    x = x * cos(rad) + y * sin(rad);
    y = x * sin(rad) + y * cos(rad);
}

void Diem::Zoom(const double& k) {
    x = k * x;
    x = k * y;
}
Diem::Diem()
{
    x = 0;
    y = 0;
}

Diem::Diem(double a, double b)
{
    x = a;
    y = b;
}

Diem::Diem(const Diem& c)
{
    x = c.x;
    y = c.y;
}

Diem::~Diem()
{
}