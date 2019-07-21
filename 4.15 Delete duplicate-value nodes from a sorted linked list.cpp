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

void Print(struct node *h)
{
    temp = h;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int j = 0;
int main()
{
    int n, a;

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
    cout << "Before removing duplicates" << endl;
    Print(head);
    t1 = head;
    while(t1 != NULL)
    {
        while(t1 != NULL && t1 -> next != NULL && (t1 -> data == t1 -> next -> data))
        {
            t2 = t1 -> next;
            t3 = t2 -> next;
            t1 -> next = t3;
            delete(t2);
        }
        t1 = t1 -> next;
    }
    cout << "After removing duplicates" << endl;
    Print(head);

    return 0;
}
