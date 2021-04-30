#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long n, f=0;
		cin>>n;

		long long a[n], x=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			x = x + a[i];
		}

		ll m, ans;

		if(x%n != 0)
		{
			cout<<"Impossible"<<endl;
			break;
		}
		else
		{
			m = x/n;

			for(int i=0;i<n;i++)
			{
				if(a[i] == m)
				{
					ans = i+1;
					f = 1;
					break;
				}
			}

			if(f==1)
				cout<<ans<<endl;
			else
				cout<<"Impossible"<<endl;
		}
	}
}