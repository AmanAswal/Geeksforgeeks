#include<iostream>
#include<algorithm>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    sort(arr, arr+n);
    return arr[k-1];
}

int main()
 {
	int t,n,k; cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    cout<<kthSmallest(arr, n, k)<<endl;
	}
	return 0;
}
