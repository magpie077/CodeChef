#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int n;
		cin>>n;
		int a[n], b[n], sum = 0, ss1=0, ss2=0;

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
			if(a[i] > b[i])
			{
				sum = sum + a[i];
			}
			else
			{
				for(int j=i;j<n;j++)
				{
					ss1 = ss1 + a[j];
					ss2 = ss2 + b[j];
				}
				if(ss1 >= ss2)
					sum = sum + ss1;
				else
				{
					
				}
			}
		}


	}
}