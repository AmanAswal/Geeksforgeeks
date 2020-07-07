#include <bits/stdc++.h> 
using namespace std;

void permute(string str){
     sort(str.begin(), str.end());
    do { 
       cout << str << " "; 
    } while (next_permutation(str.begin(), str.end())); 
    
    cout<<endl;
    
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    permute(s);
	}
	return 0;
}
