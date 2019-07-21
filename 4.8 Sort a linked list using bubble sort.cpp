#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *temp = NULL, *t4 = NULL;

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

    for(int i = 0; i < n - 1; i++)
    {
        t1 = head;
        t2 = t1 -> next;
        if(t1 -> data > t2 -> data)
        {
            t3 = t2 -> next;
            t1 -> next = t3;
            t2 -> next = t1;
            head = t2;
        }
        t1 = head;
        for(int j = 1; j < n - 1 - i; j++)
        {
            t2 = t1 -> next;
            t3 = t2 -> next;
            t4 = t3 -> next;
            if(t2 -> data > t3 -> data)
            {
                t2 -> next = t4;
                t1 -> next = t3;
                t3 -> next = t2;
            }
            t1 = t1 -> next;
        }
    }
    cout << "After sorting " << endl;
    temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}
