#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int hash[257]={0};
	    for(int i=0;i<s.size();i++){
	        hash[s[i]]++;
	    }
	    int count=0;
	    for(int i=0;i<s.size();i++){
	        if(hash[s[i]]>1){
	            cout<<s[i]<<endl;
	            break;
	        }
	        else if(hash[s[i]]==1){
	            count++;
	        }
	    }
	    if(count==s.size()){
	        cout<<"-1"<<endl;
	    }
	}
	}
