#include<iostream>
using namespace std;

bool isDivisible(string num)
{
    int n=num.length();
    if(n==0){
        return false;
    }
    if(n==1){
        return ((num[0]-'0')%4 == 0);
    }
    
    int last_element = num[n-1]-'0';
    int secondLast_element = num[n-2] - '0';
    
    return ((secondLast_element * 10 + last_element) % 4  == 0);
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    string num;
	    cin>>num;
	    isDivisible(num) ? cout<<1 : cout<<0;
	    cout<<endl;
	}
	return 0;
}
