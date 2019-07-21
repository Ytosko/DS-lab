#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL, *tail = NULL;

int main()
{
    int n, a;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        temp = new node();
        temp -> data = a;
        temp -> next = NULL;
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
    cout << "Before adding" << endl;
    temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    cout << "Enter the number to add it at last" << endl;
    cin >> a;
    temp = new node();
    temp -> data = a;
    temp -> next = NULL;
    tail -> next = temp;
    tail = temp;
    cout << "After adding" << endl;
    temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

    return 0;
}

