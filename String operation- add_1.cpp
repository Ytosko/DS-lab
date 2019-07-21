#include<bits/stdc++.h>
using namespace std;
main()
{
    string x;
    cout << "Enter your string : ";
    getline(cin >> ws, x);
    string y;
    cout << "Enter string you want to add : ";
    getline(cin >> ws, y);
    x+= " " + y;
    cout << "Your new string is : " << x << endl;
}

