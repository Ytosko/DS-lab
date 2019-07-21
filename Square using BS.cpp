#include<bits/stdc++.h>
using namespace std;

main()
{
    int x;
    float root;
    cout << "Enter the value : ";
    cin >> x;
    int y;
    cout << "Enter Precision : ";
    cin >> y;
    int l = 1, r = x;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(mid*mid == x)
            {
                root  = mid;
                break;
                }
        if(mid*mid < x)
        {
            l = mid+1;
            root = mid;

        }
        else
        {
            r = mid-1;
        }

    }
    float inc = 0.1;
    for (int i = 0; i < y; i++)
    {
        while (root * root <= x)
        {
            root += inc;
        }
        root = root - inc;
        inc = inc / 10;
    }
    cout << "The root of " << x << " : " << root << endl;
}
