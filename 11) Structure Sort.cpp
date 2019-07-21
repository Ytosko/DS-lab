#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct student {
    char name[50];
    char regNo[15];
    int age;
} a;

int main()
{
    int n;

    cin >> n;
    getchar();
    struct student a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].regNo >> a[i].age;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(strcmp(a[j].name , a[j+1].name) > 0)
            {
                struct student temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout << "After sorting the structure array became" << endl;
    for(int i = 0; i < n; i++)
        cout << a[i].name << "\t"  << a[i].regNo << "\t" << a[i].age <<endl;

    return 0;
}
