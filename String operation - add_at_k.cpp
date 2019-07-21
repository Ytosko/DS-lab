#include<bits/stdc++.h>
using namespace std;

main()
{
    string x;
    cout << "Enter your string : ";
    getline(cin >> ws, x);
    string y,z,m;
    cout << "Enter string you want to add : ";
    getline(cin >> ws, y);
    int k;
    cout << "Enter the position : ";
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        m+= x[i];
    }
    for(int i = k; i < x.size(); i++)
    {
        z+= x[i];
    }
    x= m + " " + y + " " + z;
    cout << "Your new string is : " << x << endl;
}

