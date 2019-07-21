#include <iostream>
#include <cstdio>
#include<cstdlib>
#include<cassert>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL,*temp = NULL, *t1 = NULL;

struct node *GetNewNode(int y)
{
    struct node *newnode = new node();
    newnode -> data = y;
    newnode -> next = NULL;

    return newnode;
};

void Print()
{
    if(head == NULL)
        cout << "Link list is empty";
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
    cout << "Before delete " << endl;
    Print();

    ///Deleting whole link list
    t1  = head;
    while(temp != NULL)
    {
        temp = t1 -> next;
        delete(t1);
        t1 = temp;
    }
    head = NULL;
    cout << "After deleting" << endl;
    Print();

    return 0;
}
