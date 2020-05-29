/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
template
###End banned keyword*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
#include <fstream>
std::ofstream cout;
std::ifstream cin;
using std::endl;

struct node {
    char info;
    node* pNext;
};
struct List {
    node* pHead;
    node* pTail;
};
void CreateList(List& l);
node* CreateNode(char x);
void AddTail(List& l, node* p);
void Xuat(List l);
void enqueue(List& l, char x);
int dequeue(List& l);
bool isEmpty(List l);
int main()
{
    cin.open ("INPUT.txt");
    cout.open("OUTPUT.txt");

    char c;
    cin >> c;
    std::string s = "";
    cin >> s;
    List queue;
    CreateList(queue);
//###INSERT CODE HERE -
    if(s.length() == 0)
    {
        cout << "Chuoi rong.";
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            dequeue(queue);
        }
        else
        {
            enqueue(queue, s[i]);
        }
    }
    cout << endl;
    Xuat(queue);
    return 0;
    cin.close();
    cout.close();
}

void CreateList(List& l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

bool isEmpty(List l)
{
    if (l.pHead == NULL) return 1;
    else return 0;
}

void AddTail(List& Q, node* p)
{

    if (isEmpty(Q) == 1)
    {
        Q.pHead = p;
        Q.pTail = Q.pHead;
    }

    else
    {
        Q.pTail->pNext = p;
        Q.pTail = p;
    }
}

node* CreateNode(char x)
{
    node* P = new node;
    P->info = x;
    P->pNext = NULL;
    return P;
}

void enqueue(List& l, char x)
{
    node* P = CreateNode(x);
    AddTail(l, P);
}

int dequeue(List& l)
{
    if (isEmpty(l) == 1)
        return 0;
    node* p = l.pHead;
    if (l.pHead != NULL)
    {
        int temp = 0;
        temp = p->info;
        l.pHead = l.pHead->pNext;
        cout << p->info;
        delete(p);
        return 1;
    }
}

int Pop(List& l, char& Item)
{
    if (isEmpty(l) == 1) return 0;
    node* p = l.pHead;
    Item = p->info;

    l.pHead = l.pHead->pNext;
    if (l.pHead == NULL)
        l.pTail == NULL;
    delete(p);
    return 1;
}

void Xuat(List l)
{
    char Item;
    if (isEmpty(l) == 1) cout << "Hang doi rong.";

    else
    {
        cout << "Cac gia tri co trong hang doi la: ";
        while (Pop(l, Item) == 1) cout << Item;
    }
}
