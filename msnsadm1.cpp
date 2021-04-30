#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		int max = -1, x;
		cin>>n;

		int a[n], b[n], c[n];

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}

		for(int i=0;i<n;i++)
		{
			c[i] = (a[i]*20) - (b[i]*10);
			if(c[i]<0)
				c[i] = 0;
		}

		for(int i=0;i<n;i++)
		{
			if(max<c[i])
			{
				max = c[i];
				//x = i;
			}
		}

		cout<<max<<endl;
	}
}