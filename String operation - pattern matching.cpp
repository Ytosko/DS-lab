#include<bits/stdc++.h>
using namespace std;

main()
{
    string x;
    cout << "Enter your string : ";
    getline(cin >> ws, x);
    string y,z;
    int a;
    cout << "Enter string to find : ";
    cin >> y;
    for(int i = 0; i<x.size(); i++)
    {
        int j = 0;
        if(x[i] == y[j])
        {
            a = i+1;
            while(x[i] == y[j])
            {
                i++;
                j++;
            }
            if(y[j] == '\0')
            {
              cout << "Found at " << a << endl;
                return 0;
            }
            else
            {
                i = a;
                a = 0;
            }
        }
    }
    if(a==0)
        cout << "String is not present in the given string" << endl;
}
