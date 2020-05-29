#include "Candidate.cpp"

int main() {
    int n;
    Candidate a[1000];
    std::cin>>n;
    for (int i=0;i<n;i++)
    {
        a[i].Nhap();
    }
    for (int i=0;i<n;i++)
    {
        a[i].Xuat();
    }
return 0;
}
