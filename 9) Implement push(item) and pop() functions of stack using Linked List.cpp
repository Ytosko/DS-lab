#include <iostream>
using namespace std;

#define max 3
int top = 0;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL;

struct node *GetNewNode(int y)
{
    struct node *newnode = new node();
    newnode -> data = y;
    newnode -> next = NULL;

    return newnode;
};

void push(int a)
{
    if(top == max)
    {
        cout << "Overload" << endl;
        return;
    }
    temp = GetNewNode(a);
    if(head == NULL)
        head = temp;
    else
    {
        temp -> next = head;
        head = temp;
    }
    top++;
}

void pop()
{
    if(head == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    temp = head;
    head = head -> next;
    delete(temp);
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    pop();
    pop();
    pop();
    pop();

    return 0;
}
