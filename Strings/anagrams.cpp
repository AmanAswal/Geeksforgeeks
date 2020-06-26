// first solution ( not so efficient - O(n^2) )

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

// second solution with O(nlogn) time complexity
// 1. sort 2. compare

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// function to check if two strings are anagram or not
bool areAnagram(string s1, string s2){
   int n1 = s1.length();
   int n2 = s2.length();

   if(n1!=n2){
      return false;
   }

   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());

   for(int i=0; i<n1; i++){
      if(s1[i]!=s2[i]){
         return false;
      }
   }
   return true;

}

int main()
{
   string a = "test";
   string b = "sett";
   if(areAnagram(a,b)){
      cout<<"anagram";
   }
   else{
      cout<<"not anagram";
   }

	return 0;
}
