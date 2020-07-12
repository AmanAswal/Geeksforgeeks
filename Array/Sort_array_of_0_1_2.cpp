#include <iostream> 
using namespace std; 

void sortArr(int *arr, int n){
   int count0=0,count1=0, count2=0;
   
   for(int i=0; i<n; i++){
      char c = arr[i];
      switch (c)
      {
      case 0:
         count0++;
         break;
      case 1:
         count1++;
         break;
      case 2:
         count2++;
         break;
      default:
         break;
      }
   }

   while(count0 > 0){
      cout<<0<<" ";
      count0--;
   }

   while(count1 > 0){
      cout<<1<<" ";
      count1--;
   }

   while(count2 > 0){
      cout<<2<<" ";
      count2--;
   }
}

int main() 
{ 
   int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
   int n = sizeof(arr) / sizeof(int); 
  
   sortArr(arr, n); 

   return 0; 
} 
