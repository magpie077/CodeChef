#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int main()
{
	int t;
	cin>>t;
	for(long long q=0;q<t;q++)
	{
		long long n, tt=1;
		cin>>n;
		if(n==1)
		    tt = 1;
		else if(n==2)
		    tt=5;
		else
		{
    		for(long long i=2;i<=n+1;i++)
    		{
    		    tt = ((tt%m)*(i%m))%m;
    		}
		}
		cout<<tt - 1<<endl;
	}
	return 0;
}