#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long n, k, r;

		cin>>n>>k;

		r = n/k;

		if(r < k)
		{
			cout<<"YES"<<endl;
			continue;
		}
		else
		{
			if(r%k == 0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}

	}
	return 0;
}