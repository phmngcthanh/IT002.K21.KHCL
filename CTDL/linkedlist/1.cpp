#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
    int info;
    Node* pNext;
};

struct List
{
    Node* pHead;
    Node* pTail;
};

void CreateList(List &l);
void NhapList(List &l);
int DemSoPhanTu(List l);
void Split(List l, List &l1, List &l2);
void XuatList(List l);
int main()
{
    List l, l1, l2;
    CreateList(l);
    CreateList(l1);
    CreateList(l2);
    NhapList(l);
    if(DemSoPhanTu(l) == 0)
        cout << "Danh sach rong." << endl;
    else
    {
        cout << "Danh sach vua nhap la: ";
        XuatList(l);
        cout << endl;
        Split(l, l1, l2);
        cout << "Cac so chan trong danh sach la: ";
        XuatList(l1);
        cout << endl;
        cout << "Cac so le trong danh sach la: ";
        XuatList(l2);
        cout << endl;
    }
    return 0;
}
void CreateList(List& L)
{
    L.pHead=NULL;
    L.pTail=NULL;
}
int DemSoPhanTu(List L)
{
    if (L.pHead == NULL) return 0;
    else return 1;
}
bool Find(List L, int x)
{
    Node* p = L.pHead;
    while (p != NULL)
    {
        if (p->info == x) return 0;
        p = p->pNext;
    }
    return 1;
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
        PNew->info = x;
        PNew->pNext = NULL;
    }
    return PNew;
}

void EditList(List& L, Node* P)
{
    if (DemSoPhanTu(L) == 0)
    {
        L.pHead = P;
        L.pTail = L.pHead;
    }
    else
    {
        L.pTail->pNext = P;
        L.pTail = P;
    }
}


void CKK(List& L, Node* P)
{
    if (Find(L,P->info)){
        if (DemSoPhanTu(L) == 0)
        {
            L.pHead = P;
            L.pTail = L.pHead;
        }
        else
        {
            L.pTail->pNext = P;
            L.pTail = P;
        }
    }}

void NhapList(List& L)
{
    while (1)
    {
        int x;
        cin >> x;
        if (x == 0) break;
        Node* PNew = NewNode(x);
        EditList(L, PNew);
    }
}


void XuatList(List L)
{
    List Check;
    Node* Pout = L.pHead;
    while (Pout != NULL) {
        cout << Pout->info << " ";
        Pout = Pout->pNext;
    }
}

void Split(List L,List& LChan, List& LLe)
{
    Node* Pout = L.pHead;
    int i=1;
    while (Pout != NULL)
    {

        int x = Pout->info;
        Node* PNew = NewNode(x);
        if (i%2==0) CKK(LChan, PNew);
        else
            CKK(LLe, PNew);
        Pout = Pout->pNext;
        i++;
    }

}