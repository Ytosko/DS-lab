#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL, *tail = NULL, *temp_pre = NULL,*temp2 = NULL;

struct node *GetNewNode(int y)
{
    struct node *newnode = new node();
    newnode -> data = y;
    newnode -> next = NULL;

    return newnode;
};

int main()
{
    int n, a, b, f = 0, j = 0;

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

    cin >> a;
    temp = head;
    while(temp != NULL)
    {
        j++;
        if(temp -> data == a)
        {
            f = 1;
            break;
        }
        temp = temp -> next;
    }
    if(f) cout << "FOUND AT POSITION :" << j << endl;
    else cout << "NOT FOUND" << endl;

    return 0;
}



