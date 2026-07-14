#include <iostream>
using namespace std;
using ll=long long;
void solve(ll& n,ll& k){
    if(n<k) {cout<<"NO\n";
    return;
    }
    int diff=n-k;
    if(n%2==0 || diff%2==0) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        solve(n,k);
    }
    return 0;
}