#include <iostream>
#include <vector>
using namespace std;

using ll=long long;

void solve(vector<ll> a,ll n){
    sort(a.begin(),a.end());

    if(a[0]==a[n-1]){
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    cout<<a[n-1]<<" ";

    for(ll i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll>a(n);

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        solve(a,n);
    }

    return 0;
}