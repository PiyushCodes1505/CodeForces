#include <iostream>
using namespace std;
using ll=long long;

void solve(int n){
    ll a=1;
    ll b=n-1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;
            b=n-a;
            break;
        }
    }
    cout<<a<<" "<<b<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }

    return 0;
}
