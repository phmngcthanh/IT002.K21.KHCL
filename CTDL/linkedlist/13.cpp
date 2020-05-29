/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[]
template
###End banned keyword*/

#include <iostream>
using namespace std;
struct node {
    int info;
    node* pNext;
};
struct List {
    node* pHead;
    node* pTail;
};
void CreateList(List& l) {
    l.pHead = NULL;
    l.pTail = NULL;
}
void SortIncrease(List& l);

//###INSERT CODE HERE -
void AddTail( List &l, node *p)
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
};
node* CreateNode(int x)
{
    node *pNew;
    pNew = new node;
    pNew -> info =x;
    pNew -> pNext = NULL;
    return pNew;
};
void nhap(List &l)
{
    while (1)
    {
        int x;
        cin>>x;
        if (x==0)
            break;
        node *p=CreateNode(x);
        AddTail(l, p);
    }
};
void xuat(List l)
{
    node *p=l.pHead;
    while (p!=NULL)
    {
        cout<< p -> info << " ";
        p=p ->pNext;
    }
};
void sortedInsert(node**, node*);


void SortIncrease(List &L)
{
    node *sorted = NULL;
    node *current = L.pHead;
    while (current != NULL)
    {
        node *next = current->pNext;
        sortedInsert(&sorted, current);


        current = next;
    }
    L.pHead = sorted;
}
void sortedInsert(node** head_ref, node* new_node)
{
    node* current;
    if (*head_ref == NULL || (*head_ref)->info >= new_node->info)
    {
        new_node->pNext = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        current = *head_ref;
        while (current->pNext!=NULL &&
               current->pNext->info < new_node->info)
        {
            current = current->pNext;
        }
        new_node->pNext = current->pNext;
        current->pNext = new_node;
    }
}


int main()
{
    List l;
    CreateList(l);
    nhap(l);
    if (l.pHead == NULL) cout << "Danh sach rong.";
    else {
        cout << "Danh sach vua nhap la: ";
        xuat(l);
        SortIncrease(l);
        cout << endl << "Danh sach sau khi sap xep la: ";
        xuat(l);
    }
    return 0;
}