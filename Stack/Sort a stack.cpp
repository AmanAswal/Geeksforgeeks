// 1st approach

void SortedStack :: sort()
{
    vector<int> v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    
    std::sort(v.begin(), v.end());
    
    int n=v.size();
    
    for(int i=0; i<n; i++){
        s.push(v[i]);
    }
}

//2nd approach

void SortedStack :: sort()
{
    multiset<int> st;
    while(!s.empty()){
    st.insert(s.top());
    s.pop();
    }
    for(auto itr=st.begin();itr!=st.end();itr++)
    s.push(*itr);
}
