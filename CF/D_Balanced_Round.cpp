#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll=long long;

void solve(int n,int k,vector<int>a){
    sort(a.begin(),a.end());
    int cnt=1;
    int mx=1;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]<=k){
            cnt++;
        }else{
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<n-mx<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        solve(n,k,a);
    }
    return 0;
}