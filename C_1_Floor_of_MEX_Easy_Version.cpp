#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& a, int n){
    vector<int>bad(n+1);

    for(int k=1;k<=n;k++){
        int l=a[k-1]*k;
        int r=(a[k-1]+1)*k-1;

        if(l>=n) continue;

        r=min(r,n-1);

        bad[l]++;
        bad[r+1]--;
    }

    vector<int>ans;
    int x=0;

    for(int i=0;i<n;i++){
        x+=bad[i];

        if(x==0){
            ans.push_back(i);
        }
    }

    cout<<ans.size()<<"\n";

    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

        solve(a,n);
    }
}