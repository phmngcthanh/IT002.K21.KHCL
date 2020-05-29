#include <iostream>
using namespace std;
struct Node
    {
        int info;
        Node *pNext;
    };
struct List
{
    Node *pHead;
    Node *pTail;
};
void CreateList(List &l)
    {
        l.pHead=NULL;
        l.pTail=NULL;
    }
void AddTail( List &l, Node *p)
    {
        if (l.pHead==NULL)
        {
            l.pHead=p;
            l.pTail=p;
        }
        else
        {
            l.pTail -> pNext=p;
            l.pTail=p;
        }
    }
Node* CreateNode(int x)
    {
        Node *pNew;
        pNew = new Node;
        pNew -> info =x;
        pNew -> pNext = NULL;
        return pNew;
    }
void Nhap(List &l)
    {
        while (1)
        {
            int x;
            cin>>x;
            if (x==-1)
                break;
            Node *p=CreateNode(x);
            AddTail(l, p);
        }
    }
void Xuat(List l)
    {
        Node *p=l.pHead;
        while (p!=NULL)
        {
            cout<< p -> info << " ";
            p=p ->pNext;
        }
    }

int main()
{
    List l;
    CreateList(l);
    Nhap(l);
    Xuat(l);
    return 0;
}
