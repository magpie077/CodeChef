#include<bits/stdc++.h>
using namespace std;

int fn(string a)
{
	int bal=0, mbal=0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i] == '(')
			bal += bal;
		if(a[i] == ')')
			bal -= bal;
		mbal = max(mbal, bal);

	}
	return mbal;
}


int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		string a;
		cin>>a;
		cout<<a[0];
		cout<<a[2];
		int n = fn(a);

		for(int i=0;i<n;i++)
			cout<<"(";
		for(int i=0;i<n;i++)
		{
			cout<<")";
		}
		cout<<endl;


	}
}