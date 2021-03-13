#include<bits/stdc++.h> 
#include<unordered_map>

using namespace std; 


long long arrtobin(int arr[], int d)
{
	int ad = 0;
	for(int i=0;i<d;i++)
		{
			ad = ad + pow(2,d-i-1)*arr[i];
		}
	return ad;
}


int main()
{
	int q;
	cin>>q;

	while(q--)
	{
		long long c;
		cin>>c;
		long double cbt = log(c)/log(2);
		long long d = ceil(cbt);
		if(cbt == d)
			d = d + 1;
		//cout<<"ll: "<<cbt<<endl;
		//cout<<"d: "<<d<<endl;
		//long long two_d = pow(2,d);

		int cb[d];
		int a[d], b[d];
		for(int i=0;i<d;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		long long n = c;
		int i = d-1; 
    	while (n > 0) 
    	{ 
        	cb[i] = n % 2; 
        	n = n / 2; 
        	i--; 
    	} 
		
		for(long long i=0;i<d;i++)
		{
			if(cb[i] == 1)
			{
				long long val1, val2;
				a[i] = 1;
				val1 = arrtobin(a, d)*arrtobin(b, d);
				a[i] = 0;
				b[i] = 1;
				val2 = arrtobin(a, d)*arrtobin(b, d);

				if(val1 >= val2)
				{
					a[i] = 1;
					b[i] = 0;
				}
				else
				{
					a[i] = 0;
					b[i] = 1;
				}
			}
			else if(cb[i] == 0)
			{
				a[i] = 1;
				b[i] = 1;
			}
		}
		
		long long ad, bd;
		ad = arrtobin(a,d);
		// cout<<"ad: "<<ad<<" ";
		bd = arrtobin(b,d);
		// cout<<"bd: "<<bd<<endl;;
		//cout<<"\nxor: "<<ad^bd;
		long long prod = ad*bd;

		cout<<prod<<endl;

		
	}
	return 0;
}