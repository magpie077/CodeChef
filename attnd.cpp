#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int n;
		multimap<string, string> m;
		map<string, string>::iterator itr;

		cin>>n;

		string k, v;
		k="";
		v="";
		string key[n], val[n];
		for(int i=0;i<n;i++)
		{
			cin>>k>>v;
			key[i] = k;
			val[i] = v;
			m.insert(pair<string, string>(k, v));	
		}

		for(int i=0;i<n;i++)
		{
			if(m.count(key[i]) > 1)
			{
				cout<<key[i]<<" "<<val[i]<<endl;
			}
			else
				cout<<key[i]<<endl;
		}
		//itr=1;
		// itr = m.begin();
		// cout<<itr->first<<" "<<itr->second;

		// int n;
		// cin>>n;

		// string fn, ln;
		// string a[10], b[10], x[100];
		// int k=0, w=0;

		// for(int i=0;i<n;i++)
		// {
		// 	cin>>fn>>ln;
		// 	for(int j=0;j<k;j++)
		// 	{
		// 		if(fn == a[j])
		// 		{
		// 			j = x[w];
		// 			w++;
		// 		}
		// 	}
		// 	a[k] = fn;
		// 	b[k] = ln;
		// 	k++;
		// }




			
	}
	
	return 0;
}