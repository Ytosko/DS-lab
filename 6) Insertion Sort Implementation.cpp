#include <iostream>
using namespace std;

int main()
{
    int n, j, key;

    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    for(int i = 1; i < n; i++)
    {
        key = a[i];
        for(j = i; a[j -1] > key && j > 0; j--)
            a[j] = a[j -1];
        a[j] = key;
        for(int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }


    return 0;
}
