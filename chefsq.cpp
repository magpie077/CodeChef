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
		
		int a[n];
		for(int k=0;k<n;k++)
		    cin>>a[k];
		
		int f, i, flag=0;
		cin>>f;
		
		int b[f];
		for(int k=0;k<f;k++)
		    cin>>b[k];

       // cout<<a[0];//<<" "<<b[0]<<endl;;
		for(i=0;i<n;i++)
		{
			if(a[i] == b[0])
			{
				for(int j=0;j<f;j++)
				{
				    //cout<<"h1"<<endl;
					if(a[i+j] == b[j])
						flag = 1;
					else
					    flag=0;
				}
				if(flag==1)
				    break;
			}
		}
		if(flag==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}