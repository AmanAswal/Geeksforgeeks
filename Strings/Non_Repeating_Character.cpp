#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	   int arr[26]={0};
	   int f=0;
	    for(int i =0;i<s.size();i++)
	    {
	     
	       arr[s[i]-'a']++;
	    }
	    for(int i = 0;i<s.size();i++)
	    {
	        if(arr[s[i]-'a']==1)
	        {
	            cout<<s[i]<<endl;
	            f=1;
	            break;
	        }
	    }
	    if(f==0)
	    cout<<"-1"<<endl;
	}
}
