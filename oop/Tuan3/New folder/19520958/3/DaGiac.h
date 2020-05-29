//
 // Created by PhamNguyenVietTan on 4/27/2020.
//
#include "Point.cpp"
#ifndef INC_2_DAGIAC_H
#define INC_2_DAGIAC_H
class DaGiac
{
private:
    int n;
    Point P[10];
public:
    friend istream &operator >> (istream& is, DaGiac&);
    friend ostream &operator << (ostream& os, DaGiac&);

};
#endif //INC_2_DAGIAC_H
