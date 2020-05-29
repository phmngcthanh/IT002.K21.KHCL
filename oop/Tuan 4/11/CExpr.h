#pragma once
#include<string>
using namespace std;
class CExpr
{
private:
    string formula;
    int Result;
public:
    CExpr();
    CExpr(string f);
    ~CExpr();
    int GetOperatorWeight(char check);
    bool IsOpeningParenthese(char c);
    bool HasHigherPre(char C_top,char C_str);
    bool isoperator(char c);
    bool isoperand(char c);
    int result(string c,int n);
    int GetRes();
    string infixTopostfix(string s);
};
