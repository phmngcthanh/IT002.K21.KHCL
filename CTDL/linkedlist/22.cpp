
struct node {
    long info;
    node* pNext;};

struct List {
    node* pHead;
    node* pTail;};

void CreateList(List& l) {
    l.pHead = NULL;
    l.pTail = NULL;};

void ReverseList(List& l){
    node* P = l.pHead;
    node* Q = NULL;
    node* T = NULL;
    while (P != NULL)
    {   T = P->pNext;
        P->pNext = Q;
        Q = P;
        P = T;}
    l.pHead = Q;};

bool IsEmpty(List L){
    if (L.pHead == NULL) return 1;
    else return 0;};

node* CreateNode(int x){
    node* P = new node;
    if (P == NULL){
        exit(1);}
    else {
        P->info = x;
        P->pNext = NULL;};
    return P;};

void AddTail(List& L, node* P){
    if (IsEmpty(L) == 1)    {
        L.pHead = P;
        L.pTail = L.pHead;}
    else    {
        L.pTail->pNext = P;
        L.pTail = P;}};

node* Find(List l,int x){
    for (node* P = l.pHead; P != NULL; P = P->pNext){
        if (P->info == x) return P;};
    return NULL;
}

void Delete(List& l, int x){
    node* P = Find(l, x);
    node* Q = l.pHead;
    if (P == l.pHead){
        l.pHead = P->pNext;
        P->pNext = NULL;
        delete(P);
        return;   }
    while (Q->pNext != P){
        Q = Q->pNext;}
    if (P == l.pTail){
        l.pTail = Q;
        Q->pNext = NULL;
        delete(P);}
    else{
        Q->pNext = P->pNext;
        P->pNext = NULL;
        delete(P);}};

void nhap(List &l,int& a){
	CreateList(l);
    while (1){
        int x;
        cin>>x;
        if (x==0)
            break;
        node *p=CreateNode(x);
        AddTail(l, p);};
	cin >> a;};

void xuat(List L){
    node* P = L.pHead;
    while (P != NULL){
        cout << P->info << " ";
        P = P->pNext;}};
int main(){
    List l;
    int x;
    CreateList(l);
    nhap(l,x);
    ReverseList(l);
    if (l.pHead == NULL) cout << "Danh sach rong.";
    else {
        if (Find(l, x) != NULL){
            Delete(l, x);
            if (l.pHead == NULL) {
                cout << "Danh sach rong.";}
            else {
                xuat(l);}}
        else{
            cout << "Khong tim thay " << x << " trong danh sach:";
            cout << endl;
	xuat(l);}}
    return 0;
};