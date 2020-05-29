#include <iostream>
using namespace std;
struct Node
{
	int val;
	Node* next;
};
struct List
{
	Node* head;
	Node* tail;
};
void Khoitaolist(List &li)
{
	li.head = NULL;
	li.tail = NULL;
}
Node* khoitaonode(int x)
{
	Node* p = new Node;
	p->val = x;
	p->next = NULL;
    return p;
}
void xuat(List& l)
{
	for (Node* p = l.head; p != NULL; p = p->next)
	{
		cout << p->val << " ";
	}
}
void  add_front(List& a, int z)
{
    Node*p=khoitaonode(z);
    if (a.head == NULL)
    {
        a.head = a.tail = p;
    }
    else {
        p->next = a.head;
        a.head = p;
    }
}
void  add_back(List &a, int z)
{
    Node* p = khoitaonode(z);
    if (a.head == NULL)
    {
        a.head = a.tail = p;
    }
    else {
        a.tail->next = p;
        a.tail = p;
    }
}
void thembatki(List& li, int a, int b)
{
    Node* p = li.head, * q = new Node;
    q->val = b;
    while (p != NULL)
    {
        if (p->val == a)
        {
            q->next = p->next;
            p->next = q;
            if (q->next == NULL)
            {
                li.tail = q;
            }
            return;
        }
        p = p->next;
    }
    add_front(li, b);
}

int main()
{
    List li;
    Khoitaolist(li);
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int dau, a, b;
    while (cin >> dau)
    {
        if (dau == 0)
        {
            cin >> a;
            add_front(li, a);
        }
        else if (dau == 1)
        {
            cin >> a;
            add_back(li, a);
        }
        else if (dau == 2)
        {
            cin >> a >> b;
            thembatki(li, a, b);
        }
        else
        {
            break;
        }
    }
    xuat(li);
}
