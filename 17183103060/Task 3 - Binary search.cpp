#include <iostream>
using namespace std;

int main()
{
    int mid, l, r, Iteam,n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    while(1)
    {
    cin >> Iteam;

    if(Iteam == -1)
    {
        cout << "End." << endl;
        return 0;
    }
    else{
    l = 0, r = n - 1;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(a[mid] == Iteam)
            break;
        if(a[mid] < Iteam)
            l = mid + 1;
        else if(a[mid] > Iteam)
            r = mid - 1;
    }
    if(a[mid] == Iteam)
        cout << "Found. \nPosition : " <<  mid << endl;
    else
        cout << "Not found\a" << endl;
    }
    }
}
