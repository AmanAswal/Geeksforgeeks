#include<iostream>
using namespace std;

int first_Occurance(int *arr, int n, int x){
    int start = 0, end = n-1, result = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == x){
            result = mid;
            end = mid - 1; // just change here
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

int last_Occurance(int *arr, int n, int x){
    int start = 0, end = n-1, result = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == x){
            result = mid;
            start = mid + 1; // just change here
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
	   
	    int first = first_Occurance(arr, n, x);
	    int last = last_Occurance(arr, n, x);
	    
	    if(first == -1){
	        cout<<-1<<endl;
	    } else {
	        cout<<first<<" "<<last<<endl;
	    }
	}
	return 0;
}
