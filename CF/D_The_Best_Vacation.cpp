#include <iostream>
#include <vector>
using ll=long long;
using namespace std;

ll tri(ll x){
    return x*(x+1)/2;
}
void solve(int n, ll x, vector<ll>& d){
    ll days=0, hugs=0, ans=0;
    int l=0;
    for(int r=0;r<2*n;r++){
        days+=d[r];
        hugs+=tri(d[r]);

        while(l<=r && days-d[l]>=x){
            days-=d[l];
            hugs-=tri(d[l]);
            l++;
        }

        if(days>=x){
            ll need = x-(days-d[l]);
            ll cur  = hugs - tri(d[l]-need);
            ans = max(ans,cur);
        }
    }

    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> d(2*n);
    for(int i=0;i<n;i++){
        cin>>d[i];
        d[i+n]=d[i];
    }
    solve(n,x,d);
    return 0;
}