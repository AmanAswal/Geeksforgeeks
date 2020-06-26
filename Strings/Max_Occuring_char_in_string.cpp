#include<iostream>
#include<string>
using namespace std;

char getMax(string a){
   int count[256] = {0};
   int max=0;
   int step=0;
   char result;

   for(int i=0; i<a.length(); i++){
      int index = a[i];
      count[index]++;

      if(max < count[index]){
         max = count[index];
         step++;
         result = index;
      }
   }
   cout<<"Maximum occuring character is '"<<result<<"'. It occurs "<<step<<" times."<<endl;
   return result;
}

int main()
{
   string a = "aman aswal";
   getMax(a);
	return 0;
}
