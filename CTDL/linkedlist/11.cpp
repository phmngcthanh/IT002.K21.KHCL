#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
struct Node
{
    int info;
    Node* PNext;
};
struct Stack
{
    Node* PHead;
    Node* PTail;
};
Node* NewNode(int x)
{
    Node* p = new Node;
    if (p==NULL)
        return NULL;
    p-> info = x;
    p ->PNext=NULL;
    return p;
}

void InitStack(Stack &s)
{
    s.PHead=NULL;
    s.PTail=NULL;
}

bool IsEmpty(Stack s)
{
    if (s.PHead == NULL)
        return true;
    return false;
}

void Push (Stack& s,Node* p)
{
    if (s.PHead == NULL)
        s.PHead = s.PTail = p;
    else {
        p->PNext = s.PHead;
        s.PHead = p;
    }
}

bool Pop (Stack& s, int& trave)
{
    Node* p;
    if (!IsEmpty(s)) {
        p = s.PHead;
        trave = p->info;
        s.PHead = s.PHead->PNext;
        if (s.PHead == NULL)
            s.PTail = NULL;

        delete p;
        return true;

    }

    return false;
}
bool pop(Stack& s)
{
    int a;
    if (Pop(s,a))
        return 1;
    else
    {
        cout<<"Stack rong."<<endl;
        return 0;
    }
}
bool push(Stack &s,int x)
{
    Node* p;
    p= NewNode(x);

    if (p==NULL) return false;

    if (s.PHead == NULL)
    {
        s.PHead = p;
        s.PTail = p;

    }
    else {
        p->PNext = s.PHead;
        s.PHead = p;

    }

    return true;
}
void xuat(Stack l)
{
    Node *p=l.PHead;
    if(IsEmpty(l))
        cout<<"Stack rong."<<endl;
    else
    {cout<<"Cac gia tri co trong stack la: ";
    while (p!=NULL)
    {

        cout<< p -> info << " ";
        p=p ->PNext;
    }}
};

bool Top (Stack& s, int& trave)
{
    if (!IsEmpty(s)) {
        trave = s.PHead->info;
        return true;
    }
    return false;
}

int main() {
int a;
cin>>a;
    Stack s;
    InitStack(s);
    int x;
while (true)
{


    cin>>x;
    if (x==0)
    {
        xuat(s);
        break;}
    else
    if (x == a)
        pop(s);
    else { push(s,x);}

}

return 0;
}
