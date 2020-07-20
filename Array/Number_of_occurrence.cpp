//O(logn) approach using binary search

#include<iostream>
using namespace std;

int occurance(int *arr, int n, int x, bool searchFirst){
    int start = 0, end = n-1, result = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == x){
            result = mid;
            if(searchFirst)
                end = mid - 1; // first occurance
            else 
                start = mid + 1; // last occurance
        }
        else if(x < arr[mid]){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    
    return result;
}


int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    int arr[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	   
	    int first = occurance(arr, n, x, true);
	     if(first == -1){
	        cout<<-1<<endl;
	    } 
	    else {
	        int last = occurance(arr, n, x, false);
	        cout<<last-first+1<<endl;
	    }
	}
	return 0;
}
