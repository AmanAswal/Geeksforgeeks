#include <stack>
#include <string>
#include <iostream>

using namespace std;

string isBalanced(string str){
    stack<char> s;
    for(int i=0; i<str.length();i++)
    {
        char ch = str[i];
        switch(ch)
        {
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case ')':
            if(s.empty() || (s.top()!='(')){
                return "not balanced";
            }
            else{
                s.pop();
                break;
            }
            case '}':
            if(s.empty() || (s.top()!='{')){
                return "not balanced";
            }
            else{
                s.pop();
                break;
            }
            case ']':
            if(s.empty() || (s.top()!='[')){
                return "not balanced";
            }
            else{
                
                s.pop();
                break;
            }
        }
    }
    return s.empty()? "balanced":"not balanced";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<isBalanced(str)<<endl;
    }    
    return 0;
}
