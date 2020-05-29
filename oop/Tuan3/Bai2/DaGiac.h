#include "Diem.cpp"

class DaGiac {

    private:
        int n;
		Diem a[10];
    public:
        void Nhap();
        void Xuat();
        DaGiac();
        DaGiac(const DaGiac&);
        
        ~DaGiac();
        void Dichuyen(const double&);
        void Quay(const double&);
        void Zoom(const double&);

};