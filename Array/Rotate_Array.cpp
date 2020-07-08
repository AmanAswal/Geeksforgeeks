// clockwise rotation using Reversal Algorithm. 
// T.C = O(n) and Auxillary S.C = O(1)

#include<iostream>
using namespace std;

void reverseArray(int *arr, int start, int end){

    while(start<end)
    {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

void rotateArray(int *arr, int d, int n){
     if (d == 0) 
        return; 
    reverseArray(arr, 0, d - 1); 
    reverseArray(arr, d, n - 1); 
    reverseArray(arr, 0, n - 1); 
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	   
	   cin>>d;
	   
	   rotateArray(arr, d, n);
	   
	   for(int i=0; i<n; i++)
	        cout<<arr[i]<<" ";
	   
	   cout<<endl;
	}
	return 0;
}
