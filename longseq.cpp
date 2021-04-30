#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		long long n, cnt0=0, cnt1=0;
		string s;
		cin>>s;
		
		n = s.length();
		
        
		for(int i=0;i<n;i++)
		{
            if(s[i]=='0')
                cnt0++;
            else
                cnt1++;
		}
		//cout<<cnt0<<"  "<<cnt1<<endl;

		if(cnt1==1 || cnt0==1)
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
	
	return 0;
}