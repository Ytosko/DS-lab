#include <iostream>
using namespace std;

#define max 3
int a[max - 1];
int top = -1;

void push(int data)
{
    if(top == max - 1)
    {
        cout << "Overloaded" << endl;
        return;
    }
    a[++top] = data;
}

void pop()
{
    if(top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    top--;
}

int main()
{
    push(4);
    push(5);
    push(6);
    push(7);

    pop();
    pop();
    pop();
    pop();
}
