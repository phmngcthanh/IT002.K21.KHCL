

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

	}
}

int main()
{
	List L,Check;

	ReadData(L);
	PrintResult(L,Check);

	return 0;
}