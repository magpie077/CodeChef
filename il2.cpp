#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	for (int q = 0; q < t; q++)
	{
		long long n, m, k, r1, r2;

		cin>>n>>m>>k;
		r1 = n/m;
		r2 = n%m;

		if(r2%k == 0)
		{
			cout<<r2/k;
		}
		else
			cout<<"-1";


	}
	return 0;
}