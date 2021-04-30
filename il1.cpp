#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	for (int q = 0; q < t; q++)
	{
		int n;
		cin>>n;
		int cnt=0;
		
		while(n>0)
		{
			int k = sqrt(n);			
			int j = k*k;
			//cout<<k;
			n = n - j;
			cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}