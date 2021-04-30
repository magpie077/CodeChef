#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		long long n, i, r=0, ans, ans1, ans2, len;
		char x;
		cin>>n;
		vector<string> str;

		string s;
		cin>>s;
		cin>>x;

	 
    	for (i = 0; i < n; i++)  
        	for (len = 1; len <= n - i; len++) 
            	str.push_back(s.substr(i, len));


        for(i=0;i<str.size();i++)
        {
        	if(str[i].find(x)!=-1)
        	{
        		r++;
        	}
        } 
        cout<<r<<endl;

		// for(i=0;i<n;i++)
		// {
		// 	if(s[i]==x)
		// 		r++;
		// }

		// ans1 = (n*(n+1))/2;
		// ans2 = (r*(r-1))/2;

		// ans=ans1 - ans2;


		// cout<<ans<<endl;
	}
}