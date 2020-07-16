#include<iostream>
#include<unordered_set>
using namespace std;

bool twoSum(int *arr,int n, int x){
    unordered_set<int> s;
    
    for(int i=0; i<n; i++){
        int diff = x - arr[i];
        
        if(s.find(diff) != s.end())
            return true;
        
        s.insert(arr[i]);
    }
    return false;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	        
	    if(twoSum(arr, n, x)){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
