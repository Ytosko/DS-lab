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
            tail -> next = head; ///Have make this line comment to make the link list as simple non cycled link list
        }
    }

    int f;
    temp = head;
    while(1)
    {
        temp = temp -> next;
        if(temp == NULL)
        {
            f = 0;
            break;
        }
        if(temp -> data == head -> data)
        {
            f = 1;
            break;
        }
    }
    if(f) cout << "Cycled link list" << endl;
    else cout << "Not cycled link list" << endl;

    return 0;
}



