#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, f=0, f2=0;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int i=0;i<n;i++)
		{
			if(a[i]==2)
			{
				cout<<"No"<<endl;
				f2 = 1;
				break;
			}
			else
			{
				if(a[i]==5)
					f = 1; 
			}
		}

		if(f==1)
			cout<<"Yes"<<endl;
		else if(f2!=1)
			cout<<"No"<<endl;
	}
}