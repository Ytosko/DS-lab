#include <iostream>
using namespace std;

int main()
{
    int mid, l, r, Iteam;
    int a[5] = {10,20,30,40,50};
    cout << "Enter the value to be searched : " ;
    cin >> Iteam;

    l = 0, r = 5 - 1;
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
        cout << "Value fount at location : " <<  mid << endl;
    else
        cout << "NOT FOUND\a" << endl;

    return 0;
}
