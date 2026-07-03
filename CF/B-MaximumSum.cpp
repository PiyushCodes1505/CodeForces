#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve(vector<int>& a,int& n,int& k){
    sort(a.begin(),a.end());
    vector<ll> pre(n+1,0);
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+a[i];
    }
    ll ans=0;
    for(int i=0;i<=k;i++){
        int l=2*i;
        int r=n-(k-i);
        if(l>r) continue;

        ll sum=pre[r]-pre[l];
        ans=max(ans,sum);
    }

    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        solve(a,n,k);
    }
    return 0;
}