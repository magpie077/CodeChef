#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector<long long> v;
	long long k, ans;

	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>k;
		v.push_back(k);
	}

	sort(v.begin(), v.end());

	// for(int i=0;i<n;i++)
	// 	cout<<v[i]<<" ";
	if((v[2]%v[1]) > v[n-2]%v[n-1])
		ans = v[n-2]%v[n-1];
	else
		ans = v[2]%v[1];
	cout<<ans<<endl;
}