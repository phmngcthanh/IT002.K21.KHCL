/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
template
[]
###End banned keyword*/
#include <iostream>
using namespace std;
struct node
{
	int info;
	node* pNext;
};
struct List
{
	node* pHead;
	node* pTail;
};
void CreateList(List& l);
node* CreateNode(int x);
void AddTail(List& l, node* p);
void enqueue(List& l, int x);
void dequeue(List& l);
bool isEmpty(List l);
int main()
{
	List q;
	CreateList(q);
	long long x;
	cin >> x;
//###INSERT CODE HERE -
while (x>0)
{
	cout << (x % 10);
	x=x / 10 ;
}
}
void CreateList(List& l)
{
    int i;
}
