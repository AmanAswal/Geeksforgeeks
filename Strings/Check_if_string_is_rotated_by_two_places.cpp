#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        string left = s2,right=s2;
        rotate(left.begin(),left.begin()+2,left.end());
        rotate(right.begin(),right.end()-2,right.end());

        if(left==s1 || right==s1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}
