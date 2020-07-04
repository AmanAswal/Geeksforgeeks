#include<bits/stdc++.h>
using namespace std;

int stringMatch(string str)
{
    int i,n=str.length(),count=0;
    if(str[0]!='R')
    return 0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='R' || str[i]=='Y')
        {
             if(str[i]=='Y')
             {
                 count++;
                 if(count>2)
                   return 0;
             }
             else
             {
                 count=0;
             }
        }
        else
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
 {
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int k= stringMatch(s);
	    if(k==1)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
