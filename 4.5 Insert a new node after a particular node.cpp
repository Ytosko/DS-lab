#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL, *tail = NULL, *temp_aft = NULL,*temp2 = NULL;

struct node *GetNewNode(int y)
{
    struct node *newnode = new node();
    newnode -> data = y;
    newnode -> next = NULL;

    return newnode;
};

int main()
{
    int n, a, b;

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

    cin >> a >> b;
    temp = head;
    while(temp != NULL)
    {
        temp_aft = temp -> next;
        if(temp -> data == a) break;
        temp = temp -> next;
    }
    temp2 = GetNewNode(b);
    temp -> next = temp2;
    temp2 -> next = temp_aft;

    temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

    return 0;
}
