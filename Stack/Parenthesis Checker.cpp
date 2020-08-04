bool ispar(string x)
{
    stack<char> s;
    for(int i=0; i<x.length();i++)
    {
        char ch = x[i];
        switch(ch)
        {
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case ')':
            if(s.empty() || (s.top()!='(')){
                return false;
            }
            else{
                s.pop();
                break;
            }
            case '}':
            if(s.empty() || (s.top()!='{')){
                return false;
            }
            else{
                s.pop();
                break;
            }
            case ']':
            if(s.empty() || (s.top()!='[')){
                return false;
            }
            else{
                
                s.pop();
                break;
            }
        }
    }
    return s.empty()? true:false;
}
