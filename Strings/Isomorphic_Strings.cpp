#include<iostream>
using namespace std;

bool areIsomorphic(string str1, string str2){
    if(str1.length() != str2.length())
        return 0;
    
    int hash1[256]={0}, hash2[256]={0};
    
    for(int i=0; i<str1.length(); i++){
        if(hash1[str1[i]] != hash2[str2[i]])
            return 0;
        else{
            hash1[str1[i]]++;
            hash2[str2[i]]++;
        }
    }
    return 1;
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    string str1, str2;
	    cin>>str1;
	    cin>>str2;
	    cout<<areIsomorphic(str1, str2)<<endl;
	}
	return 0;
}
