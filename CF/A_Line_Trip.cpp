#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& a,int& n,int&x){
    int d=0;
    int ans=a[0];
    for(int i=0;i<n-1;i++){
        d=abs(a[i]-a[i+1]);
        ans=max(ans,d);
    }
    int diff=x-a[n-1];
    ans=max(ans,2*diff);
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(a,n,x);
    }
    return 0;
}