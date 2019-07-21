#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL,*temp = NULL;

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
    ///Deleting (From front)
    temp = head -> next;
    head = head -> next;
    delete(temp);
    cout << "After delete" << endl;
    Print();

    return 0;
}
