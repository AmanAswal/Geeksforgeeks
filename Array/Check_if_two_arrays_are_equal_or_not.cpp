#include<iostream>
#include<unordered_map>
using namespace std;

bool areEqual(unsigned long long arr1[], unsigned long long arr2[], int n) 
{ 
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr1[i]]++; 
  
    for (int i = 0; i < n; i++) { 
        // If there is an element in arr2[], but 
        // not in arr1[] 
        if (mp.find(arr2[i]) == mp.end()) 
            return false; 
  
        // If an element of arr2[] appears more 
        // times than it appears in arr1[] 
        if (mp[arr2[i]] == 0) 
            return false; 
  
        mp[arr2[i]]--; 
    } 
  
    return true; 
} 
    
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unsigned long long A[n], B[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>A[i];
	        
	    for(int i=0; i<n; i++)
	        cin>>B[i];
	        
	    if (areEqual(A, B, n)) 
            cout <<1<<endl; 
        else
            cout <<0<<endl; 
	}
	return 0;
}
