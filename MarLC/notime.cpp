#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, h, x;
	cin>>n>>h>>x;
	int flag = 0;
	int t[n];

	for(int i=0;i<n;i++)
		cin>>t[i];


	for(int i=0;i<n;i++)
	{
		if(h <= x + t[i])
		{
			cout<<"YES"<<endl;
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout<<"NO"<<endl;

	return 0;
}
