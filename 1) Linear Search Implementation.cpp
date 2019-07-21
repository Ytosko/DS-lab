#include <iostream>
using namespace std;

int main()
{
    int n, b, i, f = 0;

    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> b;
    for(i = 0; i < n; i++)
        if(a[i] == b)
        {
            f = 1;
            break;
        }
    if(f)
        cout << i << endl;
    else
        cout << "NOT FOUND" << endl;

    return 0;
}
