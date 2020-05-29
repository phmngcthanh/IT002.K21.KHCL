//
 // Created by PhamNguyenVietTan on 4/27/2020.
//
#include "Point.cpp"
#ifndef INC_2_TAMGIAC_H
#define INC_2_TAMGIAC_H
class TamGiac
{
private:
    Point x;
    Point y;
    Point z;
public:
    friend istream &operator >> (istream& is, TamGiac&);
    friend ostream &operator << (ostream& os, TamGiac&);

};
#endif //INC_2_TAMGIAC_H
