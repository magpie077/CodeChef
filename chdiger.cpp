#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int q=0;q<t;q++)
	{
		long long n;
		int d;
		cin>>n;

    	vector<long long> digits;

	    while(n)
	    {
	        digits.push_back(n%10);
	        n /= 10;
	    }
    	reverse(digits.begin(),digits.end());

    	for (int i = 0; i < digits.size(); i++)
    	{
    		if (digits[i]>d)
    		{
    			digits.erase(i);
    			digits.push_back(d);
    		}
    	}
    	cout<<digits[1];
	}
	return 0;
}