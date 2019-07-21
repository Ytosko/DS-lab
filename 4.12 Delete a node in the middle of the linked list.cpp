#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL,*temp = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;

struct node *GetNewNode(int y)
{
    struct node *newnode = new node();
    newnode -> data = y;
    newnode -> next = NULL;

    return newnode;
};

void Print()
{
    temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    int n, a, mid;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        temp = GetNewNode(a);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    cout << "Before delete " << endl;
    Print();
    ///Deleting (From mid)
    t1 = head;
    if(n%2 == 0)
        mid = (n/2)-1;
    else
        mid = n / 2;
    for(int i = 1; i <= mid - 1; i++)
        t1 = t1 -> next;
    t2 = t1 -> next;
    t3 = t2 -> next;

    t1 -> next = t3;
    delete(t2);

    cout << "After delete" << endl;
    Print();

    return 0;
}
