
#include <iostream>

using namespace std;
#ifndef POINT_H
#define POINT_H
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
#endif 
