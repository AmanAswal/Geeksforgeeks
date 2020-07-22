#include <iostream> 
using namespace std; 

int circularArraySearch(int *arr, int n, int x){
   int low=0, high=n-1;
   while(low<=high)
   {
      int mid = low + (high-low)/2;
      
      // Case 1: Found x.. yeah!
      if(arr[mid] == x){
         return mid;
      }

      // Case 2: Right part is sorted
      else if(arr[mid] <= arr[high]){
         if(x > arr[mid] && x <= arr[high])
            low = mid+1;   // go searching in right sorted half
         else
            high = mid-1;  // go searching in left
      }

      // Case 3: Left part is sorted
      else if(arr[mid] >= arr[low]){
         if(x < arr[mid] && x >= arr[low])
            high=mid-1; // go searching in left sorted half 
         else
            low=mid+1;  // go searching in right
      }

   }
   return -1;
}

int main() 
{ 
   int arr[8] = {12,14,18,21,3,6,8,9};
   int x;
   cout<<"Enter a number to found: ";
   cin>>x;
   cout<<"Element found at index "<<circularArraySearch(arr, 8, x);
   return 0;
} 
