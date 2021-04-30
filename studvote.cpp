#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
    	int n, k, cnt=0;
    	cin>>n>>k;
    	int a[n+1], b[101] = {0};
    	for(int i=1;i<=n;i++)
    	{
    		cin>>a[i];
    	}

    	for(int i=1;i<n+1;i++)
    	{
    		if(a[i]!=i)
    		{
    			b[a[i]]++;
    		}
    	}

    	for(int i=1;i<n+1;i++)
    	{
    		if(b[i]>=k)
    			cnt++;
    	}
    	cout<<cnt<<endl;
    }
    return 0;
}