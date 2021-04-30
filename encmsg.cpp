#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n;
		cin>>s;
		if(n%2==0)
		{
			for(int i=0;i<n;i=i+2)
			{
				swap(s[i], s[i+1]);
			}
			//cout<<s<<endl;
		}
		else
		{
			for(int i=0;i<n-1;i=i+2)
			{
				swap(s[i], s[i+1]);
			}
			//cout<<s<<endl;
		}


		for(int i=0;i<n;i++)
		{
			int a = 122 - (s[i] - 97);
			cout<<(char)a;
		}
		cout<<endl;
		//cout<<s[0]<<endl;
	}
	return 0;
}