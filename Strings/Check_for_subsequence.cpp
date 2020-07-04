#include<iostream>
using namespace std;

int isSubsequence(string A, string B){
    int m = A.length(), n = B.length();
    int i,j=0;
    for(i=0; i<n && j<n; i++){
        if(A[j] == B[i]){
            j++;
        }
    }
    return (j==m);
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    string A, B;
	    cin>>A>>B;
	    
	    cout<<isSubsequence(A,B)<<endl;   
	}
	return 0;
}
