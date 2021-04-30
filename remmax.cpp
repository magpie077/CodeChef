#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string n;
		cin>>n;
		int r, x=1, f=0, f2=0, f3=0;// = n[0] - '0';
		//cout<<r<<endl; 

		for(int i=n.length()-1;i>0;i--)
		{
			if(n[i]=='9')
			{
				f2=1;
			}
			else
			{
				f2=0;
				break;
			}
		}

		if((n[0]-'0') != 1 && f2!=1)
		{
			r = n[0]-'0';
			//cout<<"h1"<<r<<" ";
			r = r-1;
			n[0] = r + '0';
			//cout<<"h2"<<n[0]<<" ";
			for(int i=1;i<n.length();i++)
			{
				n[i] = '9';
			}		
		}
		else if((n[0]-'0') == 1)
		{
			if((n[1]-'0') != 0)
			{
				r = n[1]-'0';
				r = r-1;
				n[1] = r + '0';
				for(int i=2;i<n.length();i++)
				{
					n[i] = '9';
				}	
			}
			else
			{
				while(n[x]=='0' && x<n.length())
					x++;
				if(x<n.length()-1)
				{
					r = n[x]-'0';
					r = r-1;
					n[x] = r + '0';
					for(int i=x+1;i<n.length();i++)
					{
						n[i] = '9';
					}	
				}
				else if(x==n.length())
				{
					//cout<<"hhh ";
					f=1;
				}
				for(int k=n.length()-1;k>x;k--)
				{
					if(n[k]=='9')
					{
						f3=1;
					}
					else
					{
						f3=0;
						break;
					}
				}
			}
			
		}

		if(f==1)
		{
			for(int i=0;i<n.length()-1;i++)
			{
				cout<<9;
			}
			cout<<endl;
		}
		else if(f==0)
		{
			if(f2==1)
			{
				cout<<n[0];
				for(int i=1;i<n.length();i++)
				{
					cout<<9;
				}
				cout<<endl;
			}
			else
			{
				if(f3==1)
				{
					for(int i=0;i<x;i++)
						cout<<n[i];
					for(int i=x;i<n.length();i++)
						cout<<9;
					cout<<endl;
				}
				else
				{
					for(int i=0;i<n.length();i++)
					{
						cout<<n[i];
					}
					cout<<endl;
				}
			}
		}
		
	}
	return 0;
}