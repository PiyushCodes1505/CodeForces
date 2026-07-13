#include <iostream>
using namespace std;
using ll=long long;

void solve(int& n,int& k,ll& x){
    ll MinSum=((ll)k*(k+1))/2;
    ll nkDiff=n-k;
    ll MaxSum=((ll)n*(n+1))/2-((ll)nkDiff*(nkDiff+1))/2;

    if(MinSum<=x && MaxSum>=x) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        ll x;
        cin>>n>>k>>x;
        solve(n,k,x);
    }
}