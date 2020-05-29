/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
struct
classs
new
delete
using
###End banned keyword*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Node{
    int val;
    Node* next;
};

struct List{
    Node *head, *tail;
    int x;
};

void list_initializing(List &l){
    l.head = l.tail = NULL;
}
void add_tail(List &l, int x){
    Node*p = new Node;
    p->val = x;
    p->next = NULL;

    if (l.head == NULL){
        l.head = l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void xuat(List &l){
    for(Node *p = l.head; p != NULL; p = p->next){
        cout << p->val << " ";
    }
    cout << endl;
}



void print_longest_increasing_sub_list(List L)
{

    Node* head = L.head;
    int curr_len = 1, max_len = 1;
    int total_count = 1, res_index = 0;
    for (Node *curr=head; curr->next!=NULL; curr=curr->next)
    {
        // Compare head->data with head->next->data
        if (curr->val < curr->next->val)
            curr_len++;
        else
        {
            // compare maximum length with len.
            if (max_len < curr_len)
            {
                max_len = curr_len;
                res_index = total_count - curr_len;
            }

            curr_len = 1;
        }
        total_count++;
    }

    if (max_len < curr_len)
    {
        max_len = curr_len;
        res_index = total_count - max_len;
    }

    // Print the maximum number of continuous elements
    // in linked list.
    cout << max_len << endl;
}


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    List l;

    list_initializing(l);
    int x;
    do{
        cin >> x;
        if (x != -1) add_tail(l, x);
        else break;
    } while(true);

    print_longest_increasing_sub_list(l);


    return 0;
}