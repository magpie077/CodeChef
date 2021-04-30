#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=0;

	char xr[n];
	int x[n];
	for(int i=0;i<n;i++)
	{
		cin>>xr[i];
		x[i] = xr[i] - '0';
	}

	for(int i=n-1;i>=0;i--)
	{
		if(x[i] == 1)
		{
			cout<<k<<endl;
			break;
		}
		k++;
	}
}