#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1]={0};
        int x;
        for(int i=0; i<k; i++){
            cin>>x;
            a[x]++;
        }
        int sum=0;
        for(int i=1; i<=n; i++){
            sum += a[i];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;   
}
