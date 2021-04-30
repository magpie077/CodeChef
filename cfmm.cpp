#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int n;
		vector<string> s;
		string str;
		cin>>n;
		int a[6];
		int j=0;
		for(int i=0;i<6;i++)
			a[i] = 0;


		for(int i=0;i<n;i++)
		{
			cin>>str;
			s.push_back(str);
		}

		for(int i=0;i<n;i++)
		{
			while(s[j])
			{
				if(s[i][j] == 'c')
				{
					a[0] = a[0] + 1;
				}
				else if(s[i][j] == 'o')
				{
					a[1] = a[1] + 1;
				}
				else if(s[i][j] == 'd')
				{
					a[2] = a[2] + 1;
				}
				else if(s[i][j] == 'e')
				{
					a[3] = a[3] + 1;
				}
				else if(s[i][j] == 'h')
				{
					a[4] = a[4] + 1;
				}
				else if(s[i][j] == 'f')
				{
					a[5] = a[5] + 1;
				}
			}		
		}
		for(int i=0;i<6;i++)
		{
			if(a[i] == 0)
			{
				cout<<0<<endl;
				break;
			}
			else
			{
				for(int i=0;i<100;i++)
				{
					cnt++;
					a[i] = a[i-1]
				}
			}
		}

//		cout<<s[0][1];

	}

	return 0;
	
}