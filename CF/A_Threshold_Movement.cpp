#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(int n,vector<long long>&a){
    if(n%2){
        cout<<"NO\n";
        return;
    }
    long long mn=2e18;
    long long mx=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            mn=min(mn,a[i]);
        }else{
            mx=max(mx,a[i]);
        }
    }
    if(mn-mx>=2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(n,a);
    }
}