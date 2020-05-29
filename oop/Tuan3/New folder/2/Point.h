//
// Created by ThanhPN on 4/27/2020.
//
#include <iostream>

using namespace std;
#ifndef INC_1_POINT_H
#define INC_1_POINT_H
class Point {
private:
    int x;
    int y;
public:
    friend istream &operator >> (istream& is, Point&);
    friend ostream &operator << (ostream& os, Point&);
    void Set(int,int);
    int GetX();
    int GetY();

};
#endif //INC_1_POINT_H
