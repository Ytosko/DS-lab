#include <bits/stdc++.h>
using namespace std;

void print(vector<string> names){
	for(int i=0;i<names.size();i++)
		{
		    if(names[i] == "$")
        continue;
        else
		    cout<<names[i]<<endl;
		}
	cout << endl;
}

bool mycomp(string a, string b){
	return a<b;
}

vector<string> alphabaticallySort(vector<string> a){
	int n=a.size();
	sort(a.begin(),a.end(),mycomp);
	return a;
}

int main()
{
while(1)
{
    int count = 0;
	vector<string> names;
	string name;
	while(name != "$")
    {
        count ++;
       cin>>name;
		names.push_back(name);
    }

	names=alphabaticallySort(names);

	print(names);
	cout << count << endl;
}
}
