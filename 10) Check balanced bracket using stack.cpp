#include <iostream>
#include <stack>
#include<string>
using namespace std;

bool IsPair(char a, char b)
{
    if(a == ')' && b == '(') return true;
    else if(a == ']' && b == '[') return true;
    else if(a == '}' && b == '{') return true;
    else return false;
}

int main()
{
    string s;
    stack<char>S;
    int f = 1;

    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            S.push(s[i]);
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if(S.empty() || IsPair(s[i],S.top()) != true)
            {
                f = 0;
                break;
            }
            else
                S.pop();
        }
    }
    if(f)
    {
        if(S.empty())
            cout << "Balanced" << endl;
        else cout << "Not balanced" << endl;
    }
    else cout << "Not balanced" << endl;

    return 0;
}
