#include "polynomial.cpp"
#include <iostream>

using namespace std;
int main() {
    POLYNOMIAL a, b, res;
    a.Input();
    a.Output();

    b.Input();
    b.Output();

    int resCompare = a.Compare(b);
    if (resCompare == 1)
        cout << "Doi tuong goi compare lon hon doi tuong duoc truyen  "<<endl;
    else if (resCompare == -1)
        cout << "Doi tuong goi compare nho hon doi tuong duoc truyen  "<<endl;
    else cout << "Hai doi tuong bang nhau"<<endl;

    res = a.Add(b);
	cout<<"phep cong"<<endl;
    res.Output();
	cout<<"phep tru"<<endl;
    res = a.Subtract(b);
    res.Output();
	cout<<"phep nhan"<<endl;
    res = a.Multiply(b);
    res.Output();
	cout<<"phep dao ham"<<endl;
    res = a.Derivative();
    res.Output();
	cout<<"phep nguyen ham"<<endl;
    res = a.Privitive();
    res.Output();
}