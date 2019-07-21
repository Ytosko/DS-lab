#include <iostream>
using namespace std;

int main()
{
    int n, mina = 0, min_ind;

    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        mina = a[i];
        min_ind = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < mina)
            {
                mina = a[j];
                min_ind = j;
            }
        }
        swap(a[min_ind], a[i]);
        for(int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }


    return 0;
}
