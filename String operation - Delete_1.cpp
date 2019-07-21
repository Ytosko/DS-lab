#include<bits/stdc++.h>
using namespace std;

main()
{
    string x;
    cout << "Enter your string : ";
    getline(cin >> ws, x);
    string y;
    int a,b;
    cout << "Enter position from where you want to delete : ";
    cin >> a;
    cout << "Enter position till where you want to delete : ";
    cin >> b;
    for(int i = 0; i<x.size(); i++)
    {        if(i>=a-1 && i<=b-1)
            continue;
        else
            y+=x[i];
    }
    cout << "Your new string is : " << y << endl;
}

