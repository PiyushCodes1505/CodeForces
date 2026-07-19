#include<iostream>
#include<vector>

using namespace std;
using ll=long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
    }

    if(n&1){
        cout<<xr<<"\n";
    }
    else{
        if(xr==0){
            cout<<0<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}