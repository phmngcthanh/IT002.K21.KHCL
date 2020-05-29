

#include <iostream>
using namespace std;

struct NODE {
    char info;
    struct NODE* pNext;
};

struct STACK {
    NODE* pHead;
    NODE* pTail;
};

void CreateStack(STACK& s) {
    s.pHead = NULL;
    s.pTail = NULL;
}

NODE* CreateNode(char x)
{
    NODE* p = new NODE;
    if (p == NULL)
        return NULL;
    p->info = x;
    p->pNext = NULL;
    return p;
}

bool IsEmpty(STACK s) {
    if (s.pHead == NULL)
        return true;
    return false;
}

void Push(STACK& s, NODE* p) {
    if (s.pHead == NULL)
        s.pHead = s.pTail = p;
    else {
        p->pNext = s.pHead;
        s.pHead = p;
    }
}

bool Pop(STACK& s, char& trave)
{
    NODE* p;
    if (!IsEmpty(s)) {
        p = s.pHead;
        trave = p->info;
        s.pHead = s.pHead->pNext;
        if (s.pHead == NULL)
            s.pTail = NULL;
        delete p;
        return true;
    }
    return false;
}

bool Top(STACK& s, char& trave) {
    if (!IsEmpty(s)) {
        trave = s.pHead->info;
        return true;
    }
    return false;
}
int chk2(char b)
{
    char a = b;
    if (a==')')
        return 2;
    else if (a==']')
        return 3;
    else if (a=='}')
        return 4;
    else return 0;
}
int chk1(char a)
{
    if (a=='(')
        return 2;
    else if (a=='[')
        return 3;
    else if (a=='{')
        return 4;
    else return 0;
}

bool Check (string asb)
{
    string str=asb;
    int top=0;
    int n;
    int c,d,f;
    c=0;
    d=0;f=0;
    n=str.length();
    STACK a;
    NODE* PNode;
    CreateStack(a);
    for(int i = 0 ; i < n ; i++ )
    {
        if (chk1(str [ i ]))
        {
            PNode = CreateNode(str [ i ]);
            if (chk1(str [ i ])==2)
                    c++;
            if (chk1(str [ i ])==3)
            d++;
            if (chk1(str [ i ])==4)
            f++;
            Push(a,PNode);
        }
        if(chk2(str [ i ]) )
        {
            char s;
            Pop(a,s);
            if (chk2(str [ i ])==2)
            c--;
            if (chk2(str [ i ])==3)
            d--;
            if (chk2(str [ i ])==4)
            f--;
            if ((c<0)||(d<0)||(f<0))
            {
                cout<<"NO";
                return -1;
            }
        }
    }
    if((c == 0)&&(d == 0)&&(f == 0))
        cout<<"YES";
    else
        cout<<"NO";
}
int main() {
    string a;
    int n;
    cin>>n;
    for ( int i=0;i<n;i++)
    {
        cin>> a;
        Check(a);
    }

}
