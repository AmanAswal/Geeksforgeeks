#include <iostream> 
using namespace std; 

int main() 
{ 
   int a[3][3] = { {2,3,1}, {4,0,2}, {3,1,5} };
   int b[3][3] = { {1,2,0}, {4,1,3}, {4,2,1} };
   int c[3][3];

   // Multiplication code
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
         c[i][j] = 0;
         for(int k=0; k<3; k++){
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }

   // Printing the array
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
         cout<<c[i][j]<<" ";
      }
      cout<<endl;
   }
   return 0;
} 
