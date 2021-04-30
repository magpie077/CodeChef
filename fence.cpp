#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		long long n, m, k, i, r, c, j;
		cin>>n>>m>>k;

		long long arr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				arr[i][j]=0;
			}
		}

		for(i=0;i<k;i++)
		{
			cin>>r>>c;
			arr[r-1][c-1]=1;
		}

		//cout<<arr[0][0];

		
	}
}