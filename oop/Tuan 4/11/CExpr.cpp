#include<iostream>
#include"CExpr.h"
#include<stack>
#include<string>
#define max_size 50
using namespace std;

int CExpr::GetOperatorWeight(char check) {
	int a=-1;
	switch (check) {
	case '+':
	case '-':
		a = 1;
		break;
	case '*':
	case '/':
		a = 2;
		break;
	}
	return a;
}
bool CExpr::IsOpeningParenthese(char c) {
	if (c == '(')
		return true;
	return false;
}
bool CExpr::HasHigherPre(char c_top, char c_str) {
	int a = GetOperatorWeight(c_top);
	int b = GetOperatorWeight(c_str);
	if (a == b) {
		return true;
	}
	return a > b ? true : false;
}
bool CExpr::isoperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}
bool CExpr::isoperand(char c) {
	if (c >= '0' && c <= '9')
		return true;
	return false;
}
int CExpr::result(string c, int n) {
    c=infixTopostfix(c);
    n=c.length();
	stack<int> s;
	for (int i = 0; i < n; i++) {
		if (isoperator(c[i])) {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			if (c[i] == '+') {
				s.push(a + b);
				//cout <<a<<"+"<<b<<"= "<< a + b << endl;
			}
			else if (c[i] == '-') {
				s.push(b - a);
				//cout << a - b << endl;
			}
			else if (c[i] == '*') {
				s.push(a * b);
				//cout << a * b<<endl;
			}
			else 
			{
				s.push(b / a);
				//cout << a / b << endl;
			}
		}
		else if (c[i] == ' ') {
			int c = 0;
		}
		else {
			int operand = 0;
			while (i < n && (c[i] >= '0' && c[i] <= '9')) {
				operand = operand * 10 + (int)(c[i]) - (int)('0');
				i++;
			}
			s.push(operand);
		}
	}
	return s.top();
}
string CExpr::infixTopostfix(string s) {
	stack<int> st;
	string res="";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || s[i]==',') {
			continue;
		}
		else if (isoperand(s[i])) {
			while (isoperand(s[i])) {
				res += s[i];
				i++;
			}
			i--;
			res += ' ';
		}
		else if (isoperator(s[i])) {
			while (!st.empty() && HasHigherPre(st.top(),s[i])) {
				res+=st.top();
				res += ' ';
				st.pop();
			}
			st.push(s[i]);
		}
		else if (s[i] == '(') {
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			while (!st.empty() &&  st.top()!= '(') {
				res += st.top();
				res += ' ';
				st.pop();
			}
			if(st.top()=='('){
				st.pop();
			}
		}
	}
	while (!st.empty()) {
		if (st.top() != '(') {
			res += st.top();
			res += ' ';
		}
		st.pop();
	}
	return res;
}
CExpr::CExpr(){
    formula="";
    Result=0;
}
CExpr::CExpr(string f){
    formula=f;
    Result=result(formula,formula.length());
}
CExpr::~CExpr(){
}
int CExpr::GetRes(){
    return Result;
}