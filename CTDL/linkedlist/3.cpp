#include <iostream>
#include <math.h>

using namespace std;
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

bool CheckPrime(int x)
{
    if ((x>1) && (x%2 == 1)){
    for(int i = 2; i <= int(sqrt(x)+1); ++i)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;}
    return false;
};
int dem = 0;
bool MakeList(List& L)
{
    L.PHead=NULL;
    L.PTail=NULL;
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

void ReadData(List& L,int &i)
{
    MakeList(L);
    while (1)
    {
        int x;
        cin >> x;
        if (x == 0) break;
        Node* PNew = NewNode(x);
        i++;
        if((CheckPrime(x)) && (i%2==1)) dem++;
        EditList(L, PNew);
    }
}


void PrintResult(List L,List &Check,int i)
{
    Node* Pout = L.PHead;
    MakeList(Check);
    if (CheckList(L)) cout << "Danh sach rong.";
    else
    {
        cout << "Danh sach vua nhap la: ";
        while (Pout != NULL)
        {
            cout << Pout->Data << " ";
            Pout = Pout->PNext;
        }
        cout <<endl<< "Danh sach co "<<dem<<" so nguyen to o vi tri le.";

    }
}

int main()
{   int i=0;
    List L,Check;

    ReadData(L,i);
    PrintResult(L,Check,i);

    return 0;
}