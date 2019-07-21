#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL, *tail = NULL;

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
            tail -> next = head;
        }
    }
    temp = head;
    while(1)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
        if(temp -> data == head -> data) break;
    }
    cout << endl;

    return 0;
}


