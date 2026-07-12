#include <iostream>
#include <vector>
using namespace std;
using ll=long long;

void solve(int& n){
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    if(n==2){
        cout<<-1<<"\n";
        return;
    }
    vector<ll> a(n);
    a[n-2]=2;
    a[n-1]=1;
    ll pwr=3;
    for(int i=n-3;i>=0;i--){
        a[i]=pwr;
        pwr*=2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}