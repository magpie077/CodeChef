#include<bits/stdc++.h>
using namespace std;


int cd(int a[], int w)
{
	set<int> u;
	int r=0;

	for(int i=0;i<w;i++)
	{
		if (u.find(a[i]) == u.end()) 
		{ 
            u.insert(a[i]); 
            r++; 
        } 
	}
	return r;
}

int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		long long x, n;
		string s;

		cin>>x>>n;
		cin>>s;

		int a[n], k=0;
		if(s == "")
			cout<<"1"<<endl;

		for(int i=0;i<n;i++)
		{
			if(s[i]=='L')
			{
				x = x-1;
				a[k++] = x;
			}
			else
			{
				x = x+1;
				a[k++] = x;
			}
		}

		int w = sizeof(a)/sizeof(a[0]);
		cout<<cd(a,w)<<endl;
		return 0;
	}
}