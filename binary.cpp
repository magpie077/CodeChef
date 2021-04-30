#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		long long n, z;
		cin>>n>>z;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}


		for(int i=0;i<z;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j] == 0 && a[j+1] == 1)
				{
					swap(a[j], a[j+1]);
					j++;
				}
			}
		}

		// for(int i=n-2;i>=0;i--)
		// {
		// 	if(a[i]==0)
		// 	{
		// 		for(int j=i+1;j<=min(i+z,n);j++)
		// 		{
		// 			swap(a[j], a[j-1]);
		// 		}
		// 	}
		// }

		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}