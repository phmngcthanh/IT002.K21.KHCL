#include<iostream>
#include <stdlib.h>
using namespace std;
struct Node
{	int Data;
    Node* PNext;};
 struct List
{	Node* PHead;
	Node* PTail;};
void MakeList(List& L)
{	L.PHead = NULL;
	L.PTail = NULL;}
bool CheckList(List L)
{	if (L.PHead == NULL) return 1;
	else return 0;};
Node* NewNode(int x)
{	Node* PNew = new Node;
	if (PNew == NULL)
	{exit(1);}
	else
	{	PNew->Data = x;
		PNew->PNext = NULL;}
	return PNew;};
void EditList(List& L, Node* P)
{	if (CheckList(L) == 1)
	{	L.PHead = P;
		L.PTail = L.PHead;}
	else
	{	L.PTail->PNext = P;
		L.PTail = P;}};
void ReadData(List& L)
{	MakeList(L);
	while (1)
	{   int x;
		cin >> x;
		if (x == 0) break;
		Node* PNew = NewNode(x);
		EditList(L, PNew);}}
int Count(List L, int x)
{	int dem = 0;
	Node* p = L.PHead;
	while (p != NULL)
	{	if (p->Data == x) dem++;
		p = p->PNext;}
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

void PrintResult(List L,List &Check)
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
		cout << endl << "So lan xuat hien cua tung phan tu trong danh sach la: " << endl;
		Node* P = L.PHead;
		while (P != NULL)
		{
			if (Count(L, P->Data) != 0 && Find(Check,P->Data) == 0)
			{
				cout << P->Data << ": " << Count(L, P->Data);
				cout << endl;
				Node* P2 = NewNode(P->Data);
				EditList(Check, P2);
			}
			P = P->PNext;
		}
	}
}

int main()
{
	List L,Check;

	ReadData(L);
	PrintResult(L,Check);

	return 0;
}
