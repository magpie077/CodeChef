#include <bits/stdc++.h>
#include <iostream>
using namespace std;


/*int distinct(string r)
{
    int a[5]={0,0,0,0,0};
    int flag=0;
    
    for(int i=0;i<r.length();i++)
    {
        if(r[i]=='a')
            a[0]++;
        if(r[i]=='e')
            a[1]++;
        if(r[i]=='i')
            a[2]++;
        if(r[i]=='o')
            a[3]++;
        if(r[i]=='u')
            a[4]++;
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>0)
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    
    if(flag==1)
        return 5;
    else
        return 2;
    
}*/

int main() 
{
    
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        int n, cnt=0, z=1;
        cin>>n;
        
        string s[n], r;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                r = s[i] + s[j];
                // if(distinct(r) == 5)
                //     cnt++;
                for (int i = 0; i < r.length(); i++)
                {
                    if(r[i]=='a')
                        z = z*2;
                    if(r[i]=='e')
                        z = z*3;
                    if(r[i]=='i')
                        z = z*5;
                    if(r[i]=='o')
                        z = z*7;
                    if(r[i]=='u')
                        z = z*11;
                }

                if(z%2310==0)
                    cnt++;
            }   
        }
        
        cout<<cnt<<endl;
        
    }
	return 0;
}
