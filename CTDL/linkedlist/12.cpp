/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[
]
template

###End banned keyword*/

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//###INSERT CODE HERE -

struct Node
{
    int Data;
    Node* PNext;
};

struct List
{
    Node* PHead;
    Node* PTail;
};

void MakeList(List& L)
{
    L.PHead = NULL;
    L.PTail = NULL;
}

bool CheckList(List L)
{
    if (L.PHead == NULL) return 1;
    else return 0;
}

Node* NewNode(int x)
{
    Node* PNew = new Node;
    if (PNew == NULL)
    {
        exit(1);
    }
    else
    {
        PNew->Data = x;
        PNew->PNext = NULL;
    }
    return PNew;
}

void EditList(List& L, Node* P)
{
    if (CheckList(L) == 1)
    {
        L.PHead = P;
        L.PTail = L.PHead;
    }
    else
    {
        L.PTail->PNext = P;
        L.PTail = P;
    }
}

void ReadData(List& L)
{
    MakeList(L);
    while (1)
    {
        int x;
        cin >> x;
        if (x == 0) break;
        Node* PNew = NewNode(x);
        EditList(L, PNew);
    }
}

int Count(List L, int x)
{
    int dem = 0;
    Node* p = L.PHead;
    while (p != NULL)
    {
        if (p->Data == x) dem++;
        p = p->PNext;
    }
    return dem;
}

bool Find(List L, int x)
{
    Node* p = L.PHead;
    while (p != NULL)
    {
        if (p->Data == x) return 1;
        p = p->PNext;
    }
    return 0;
}
void ReverseList(List& l)
{
    Node* Pt = l.PHead;
    Node* Q = NULL;
    Node* T = NULL;
    while (Pt != NULL)
    {
        T = Pt->PNext;
        Pt->PNext = Q;
        Q = Pt;
        Pt = T;
    }
    l.PHead = Q;
}
void PrintResult1(List& L)
{
    Node* Pout = L.PHead;
    ReverseList(L);
    {

        while (Pout != NULL)
        {
            cout << Pout->Data << " ";
            Pout = Pout->PNext;
        }


    }
}

void PrintResult(List L){
    List Check;
    Node* Pout = L.PHead;
    MakeList(Check);
    {

        while (Pout != NULL)		{
            cout << Pout->Data << " ";
            Pout = Pout->PNext;}
    }};

void Solve(List &L,int max){
    List Check;
    Node* Pout = L.PHead;
    MakeList(Check);
    if (CheckList(L)) cout << "Danh sach rong.";
    else	{
        ReverseList(L);
        PrintResult(L);
        cout<<endl;
        Node* P = L.PHead;
        while (P != NULL)		{
            if (Count(L, P->Data) != 0 && Find(Check,P->Data) == 0)			{
                if(Count(L, P->Data) ==max){
                cout << P->Data << ": " << Count(L, P->Data);
                cout << endl;}
                Node* P2 = NewNode(P->Data);
                EditList(Check, P2);}
            P = P->PNext;}}};
int FindMax(List L,int max=0){
    List Check;
    Node* Pout = L.PHead;
    MakeList(Check);
    Node* P = L.PHead;
    while (P != NULL)		{
        if (Count(L, P->Data) != 0 && Find(Check,P->Data) == 0)			{
            if (  Count(L, P->Data) > max) max =  Count(L, P->Data);
            Node* P2 = NewNode(P->Data);
            EditList(Check, P2);}
        P = P->PNext;}
    return max;
};
int main()
{
    List L;
    ReadData(L);
    int max=0;
    max=FindMax(L);
    Solve(L,max);
    return 0;
}
