#include <iostream> 
using namespace std; 

int findRotationCount(int *arr, int n){
   int low=0, high=n-1;
   while(low<=high)
   {
      int mid = low + (high-low)/2;
      // Case 1: when array is sorted
      if(arr[low] <= arr[high]){    
         return low;
      }
      // Find pivot.
      int prev = (mid-1+n)%n;

      // Case 2: when pivot is true
      if(arr[mid] <= arr[prev]){
         return mid;
      }

      if(arr[mid] >= arr[low])
         low = mid+1;
      else 
         high = mid-1;
   }
   return -1;
}

int main() 
{ 
   int arr[3] = {1,2,3};
   cout<<findRotationCount(arr, 3);
   return 0;
} 
