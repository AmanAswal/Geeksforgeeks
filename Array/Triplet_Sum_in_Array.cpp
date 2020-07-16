#include<iostream>
#include<unordered_set>
using namespace std;

bool triplets(int *A, int n, int target){
    for (int i = 0; i < n - 2; i++) { 
  
        // Find pair in subarray A[i+1..n-1] 
        // with sum equal to sum - A[i] 
        unordered_set<int> s; 
        int diff = target - A[i]; 
        for (int j = i + 1; j < n; j++) { 
            if (s.find(diff - A[j]) != s.end()) { 
                // cout<<A[i]<<A[j]<<diff - A[j]; 
                return true; 
            } 
            s.insert(A[j]); 
        } 
    } 
  
    // If we reach here, then no triplet was found 
    return false; 
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, target;
	    cin>>n>>target;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	        
	    cout<<triplets(arr, n, target)<<endl;
	}
	return 0;
}
