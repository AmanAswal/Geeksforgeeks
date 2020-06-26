#include<iostream>
#include<string>
using namespace std;
int main()
{
	 string a = "aab";
   string b = "abc";
   bool isAnagram = false;
   int len = b.length();
   int visited[len];

   if(a.length() == b.length()){
      for(int i=0; i<a.length(); i++){
      for(int j=0; j<b.length(); j++){
         if(b[j]==a[i] && visited[j]==0){
            visited[j] = 1;
            isAnagram = true;
            break;
         }
      }
      if(!isAnagram){
         break;
      }
   }
   }

   
   if(isAnagram){
      cout<<"anagram";
   }
   else{
      cout<<"not anagram";
   }

	return 0;
}
