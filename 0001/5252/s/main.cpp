#include <iostream>
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
void CreateList(List& l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}
void AddTail(List& l, Node* p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
Node* CreateNode(int x)
{
    Node* pNew;
    pNew = new Node;
    pNew->info = x;
    pNew->pNext = NULL;
    return pNew;
}
void Nhap(List& l)
{
    while (1)
    {
        int x;
        cin >> x;
        if (x != 0)
        if (x == 0)
            break;
        Node* p = CreateNode(x);
        AddTail(l, p);
    }
}

void Xuat(List l)
{
    Node* p = l.pHead;
    cout <<"Danh sach vua nhap la: ";
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->pNext;
    }
}
int DemSoPhanTu(List& l)
{
    int dem = 0;
    int k;
    cin >> k;
    for (Node* p = l.pHead; p != NULL; p = p->pNext)
    {
        if (k == p->info)
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    List l;
    CreateList(l);
    Nhap(l);
    if (l.pHead == NULL) {
        cout <<"Danh sach rong.";
    }
    else {
        Xuat(l);
    }
    cout << "Danh sach co" << DemSoPhanTu(l) << "phan tu.";
    return 0;
}
