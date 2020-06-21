https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string/0

#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int sum = 0;
        int i;
        for (i = 0; i < str.size(); i++){
        string temp="0";
        while (str[i] >= 48 && str[i] <= 57){
        temp.push_back(str[i]);
        i++;
        }
        sum += stoi(temp);
        }
        
        cout << sum << endl;
        
    }
	return 0;
}
