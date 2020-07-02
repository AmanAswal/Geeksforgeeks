#include<iostream>
using namespace std;

string firstRepeated(string s){
    int hash[26]={0};
    string ans="-1";
    for(int i=0; i<s.length(); i++){
       if(hash[s[i]-'a'] == 0){
            hash[s[i]-'a']++;   
       }else{
           ans=s[i];
           break;
       }
    }
    return ans;
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cout<<firstRepeated(s)<<endl;
	}
	return 0;
}
