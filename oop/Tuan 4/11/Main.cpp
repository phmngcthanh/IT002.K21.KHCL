#include<iostream>
#include"CExpr.h"
#include"CExpr.cpp"
using namespace std;

int main() {
	CExpr calculate("2 + 3 * 5 - (3 + (7 + 2) * 3) / 2");
	cout<<"2 + 3 * 5 - (3 + (7 + 2) * 3) / 2 = "<<calculate.GetRes();
	return 0;
}
