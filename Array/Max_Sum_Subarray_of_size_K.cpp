        maxS = max(wSum, maxS);

#include<iostream>
using namespace std;

int maxSum(int *arr, int n, int k){
    int wSum=0, maxS=0;
    int start=0, end=0;
    
    while(end<k){
        wSum += arr[end++];
        maxS = max(wSum, maxS);
    }
    
    while(end < n){
        wSum += arr[end++] - arr[start++];
        maxS = max(wSum, maxS);
    }
    return maxS;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    cout<<maxSum(arr, n , k)<<endl;
	}
	return 0;
}
