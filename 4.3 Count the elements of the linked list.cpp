#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL, *tail = NULL;

int main()
{
    int n, a, cnt = 0;

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
    temp = head;
    while(temp != NULL)
    {
        cnt++;
        temp = temp -> next;
    }
    cout << cnt << endl;

    return 0;
}



