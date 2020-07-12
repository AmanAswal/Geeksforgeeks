#include<iostream>
using namespace std;

int maxDiff(int *arr, int n){
    
    int diff = arr[1] - arr[0];
    int curr_min = arr[0];
    
    for(int i=1; i<n; i++){
        diff = max(diff, arr[i] - curr_min);
        curr_min = min(curr_min, arr[i]);
    }
    return diff;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	
	    cout<<maxDiff(arr, n)<<endl;
	}
	return 0;
}
