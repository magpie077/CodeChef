#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;
		int c1=0, c2=0;
		int a[26]={0};
		int n = s.length();
		for(int i=0;i<s.length();i++)
		{
			a[s[i]-97]++;
		}
		//cout<<a[0];

		if(n%2==0)
		{
			for(int i=0;i<26;i++)
			{
				if(a[i]%2==1)
					c1++;
			}
			if(c1==2)
				cout<<"DPS"<<endl;
			else
				cout<<"!DPS"<<endl;
		}
		else
		{
			for(int i=0;i<26;i++)
			{
				if(a[i]%2==1)
					c2++;
			}
			if(c2==3 || c2==1)
				cout<<"DPS"<<endl;
			else
				cout<<"!DPS"<<endl;	
		}
	}
	return 0;
}