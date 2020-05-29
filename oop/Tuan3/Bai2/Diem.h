//
// Created by ASUS on 5/3/2020.
//

#include "iostream"
#include <cmath>
using namespace std;


class Diem {

    private:
        double x;
        double y;
    public:
        void Nhap();
        void Xuat();
        void Getx();
        void Gety();
        void Setx(double);
        void Sety(double);
        void Movexy(double);
        void Zoom(const double&);
        double KhoangCach(const Diem&);
        void Quay(const double&);
        Diem();
        Diem(double, double);
        Diem(const Diem&);
        ~Diem();


};

