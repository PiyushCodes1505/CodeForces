#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
#include <climits>

using namespace std;

using ll=long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll ans=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1]){
            ans++;
            a[i]/=2;
            if(a[i]==0)
            break;
        }
        if(a[i]==0 && a[i+1]==0) ans=-1;
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}