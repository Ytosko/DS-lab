#include<bits/stdc++.h>
using namespace std;

main()
{
    string x;
    cout << "String : ";
    getline(cin >> ws, x);
    string y,z,m;
    int length = x.size();
    while(1)
    {
        cout << "Word : ";
        getline(cin >> ws, y);
        if(y == "$")
        {
            cout << "End." << endl;
            return 0;
        }
        int k;
        cout << "Index : ";
        cin >> k;
        if(k>length)
        {
            cout << "Invalid Index" << endl;
        }
        else
        {
            for(int i = 0; i < k; i++)
            {
                m+= x[i];
            }
            for(int i = k; i < length; i++)
            {
                z+= x[i];
            }
            x= m + y + z;
            cout << "Your new string is : " << x << endl;
            length -= y.size();
        }
    }
}

