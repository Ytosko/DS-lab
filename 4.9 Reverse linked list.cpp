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
    t1 = head;
    t2 = t1 -> next;
    t3 = t2 -> next;
    t1 -> next = NULL;
    while(1)
    {
        t2 -> next = t1;
        temp = t2 -> next;
        t1 = t2;
        t2 = t3;
        if(t3 == NULL) break;
        t3 = t3 -> next;
    }
    head -> next = NULL;
    head = tail;
    temp = tail;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

    return 0;
}
