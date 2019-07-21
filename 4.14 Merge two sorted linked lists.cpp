#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL,*temp = NULL, *head2 = NULL, *tail2 =NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *newhead = NULL;

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

int main()
{
    int n, a;

    cout << "Enter first linked list" << endl;
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

    cout << "Enter second linked list" << endl;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        temp = GetNewNode(a);
        if(head2 == NULL)
        {
            head2 = temp;
            tail2 = temp;
        }
        else
        {
            tail2 -> next = temp;
            tail2 = temp;
        }
    }
    cout << "Two linked list before merge" << endl;
    Print(head);
    Print(head2);

    ///Start merging
    t1 = head;
    t2 = head2;
    if(t1 -> data >= t2 -> data)
    {
        newhead = t2;
        t2 = t2 -> next;
    }
    else
    {
        newhead = t1;
        t1 = t1 -> next;
    }
    t3 = newhead;
    t3 -> next = NULL;
    while(1)
    {
        if(t1 != NULL && (t1 -> data == t3 -> data))
        {
            t3 -> next = t1;
            t1 = t1 -> next;
        }
        else if(t2 != NULL && (t2 -> data == t3 -> data))
        {
            t3 -> next = t2;
            t2 = t2 -> next;
        }
        else if(t1 != NULL && t2!= NULL && (t1 -> data == t2 -> data) && (t3 -> data < t1 -> data))
        {
            t3 -> next = t1;
            t1 = t1 -> next;
            t3 = t3 -> next;
            t3 -> next = t2;
            t2 = t2 -> next;
        }
        else if(t1 == NULL && t2 != NULL)
        {
            t3 -> next = t2;
            while(t2 -> next!= NULL) t2 = t2 -> next;
            t3 = t2;
            t3 -> next = NULL;
            break;
        }
        else if(t2 == NULL && t1 != NULL)
        {
            t3 -> next = t1;
            while(t1 -> next!= NULL) t1 = t1 -> next;
            t3 = t1;
            t1 -> next = NULL;
            break;
        }
        else if(t1 -> data < t2 -> data)
        {
            t3 -> next = t1;
            t1 = t1 -> next;
        }
        else if(t1 -> data > t2 -> data)
        {
            t3 -> next = t2;
            t2 = t2 -> next;
        }
        t3 = t3 -> next;
        t3 -> next = NULL;
        if(t1 == NULL && t2 == NULL) { t3 = NULL; break;}
    }
    cout << "After merge" << endl;
    temp = newhead;
    Print(newhead);

    return 0;
}
