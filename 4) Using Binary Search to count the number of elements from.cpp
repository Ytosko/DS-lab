#include <iostream>
using namespace std;

int main()
{
    int n, first, last, l, r, m, x;

    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;

    l = 0, r = n - 1;
    while(l <= r)
    {
        m = (l+r)/2;
        if(m == 0 || x > a[m-1] && a[m] == x)
            break;
        if(x > a[m])
            l = m + 1;
        else
            r = m - 1;
    }
    first = m;

    l = 0, r = n - 1;
    while(l <= r)
    {
        m = (l+r)/2;
        if(m == n - 1 || x < a[m+1] && a[m] == x)
            break;
        if(x < a[m])
            r = m - 1;
        else
            l = m + 1;
    }
    last = m;

    cout <<last - first + 1 << endl;

    return 0;
}
