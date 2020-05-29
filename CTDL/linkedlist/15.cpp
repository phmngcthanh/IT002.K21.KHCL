
struct node {
    long info;
    node* pNext;};

struct List {
    node* PHead;
    node* PTail;};
	

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
		PNew->PNext = NULL;
	}
	return PNew;
}

void CreateList(List& l) {
    l.PHead = NULL;
    l.PTail = NULL;};

void AddTail(List& L, Node* P){
    if (IsEmpty(L) == 1)    {
        L.PHead = P;
        L.PTail = L.PHead;}
    else    {
        L.PTail->pNext = P;
        L.PTail = P;}};

void AddHead(List& L, Node* P){
    if (IsEmpty(L) == 1)    {
        L.PHead = P;
        L.PTail = L.PHead;}
    else    {
        P->pNext = L.PHead;
        L.PHead = P;}};
		
Node* Find(List l,int x){
    for (Node* P = l.PHead; P != NULL; P = P->pNext){
        if (P->info == x) return P;};
    return NULL;
}

void AddAfter(List& L, int a,int b, Node* P){
	Node* T = Find(L,a);
	
    if (T= NULL)    {
        AddHead(L,P);}
    else    {
		P->PNext=T->pNext;
        T->pNext = P;
        }};		
		
		