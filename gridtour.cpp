#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		ll n,m,k;
		cin>>n>>m>>k;

		if(k==1)
			cout<<m*n<<endl;
		else
		{
			if(k%m==0 || k%n==0 || m%k==0 || n%k==0)
				cout<<-1<<endl;
			else
				cout<<m*n<<endl;
		}
		
	}
	return 0;
}