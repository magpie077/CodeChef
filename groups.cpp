#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;

	while(q--)
	{
		long long cnt = 0;
		string s;
		cin>>s;

		for(int i=0;i<s.length();i++)
		{
			if(s[i] == '0')
			{
				//cout<<"in if\n";
				continue;
			}
			else
			{
				//cout<<"in else\n";
				cnt++;
				while(s[i+1] == '1')
				{
					//cout<<"in else while\n";
					i++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}	