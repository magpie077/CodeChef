#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int d;
		cin>>d;
		string s;
		//for(int i=0;i<d;i++)
		cin>>s;
		cout<<"hhtt.  ";
		int cp=0, ca=0;
		float r;

		for(int i=0;i<s.length();i++)
		{
			//cout<<"h"<<i<<" ";
			if(s[i]!='A')
				cp++;
			else
				ca++;
		}

		r = cp/(cp+ca);
		
		if(r >= 0.75)
		{
			cout<<0<<endl;
			continue;
		}
		else
		{	
			int k=1;
			while(r<0.75)
			{
				r = (cp+k)/(cp+ca);
				k++;
			}
			int i=2, ccc=0;
			while(ccc!=k || i<=d-3)
			{
				if(s[i]=='A')
				{
					if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
						ccc++;
				}
				i++;
			}

			if(ccc==k)
				cout<<ccc<<endl;
			else
				cout<<-1<<endl;
		}
	}
	return 0;
}