#include "DaGiac.h"

void DaGiac::Nhap() {
    cout<<"nhap so chieu"<<endl;
    cin>>n;
for (int i=0;i<n;i++)
    a[i].Nhap();

}

void DaGiac::Xuat() {
for (int i=0;i<n;i++)
    a[i].Xuat();

}

void DaGiac::Dichuyen(const double& t) {
for (int i=0;i<n;i++)
   a[i].Movexy(t);

}

void DaGiac::Quay(const double& rad) {
    for (int i=0;i<n;i++)
	a[i].Quay(rad);

}

void DaGiac::Zoom(const double& k) {
	 for (int i=0;i<n;i++)
	 {
		 a[i].Zoom(k);
	 }
  }

DaGiac::DaGiac() {
}

DaGiac::DaGiac(const DaGiac& x) {
   for (int i=0;i<n;i++)
	a[i]=x.a[i];

}

DaGiac::~DaGiac() {}

