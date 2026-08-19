#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

#define int long long

void solve(string s){
    int n=s.length();
    int l=1;
    int r=n;
    while(l<r){
        int k=l+(r-l)/2;
        bool ok=false;
        for(int c=0;c<26;c++){
            int last=-1;
            int mx=0;
            for(int i=0;i<n;i++){
                if(s[i]-'a'==c){
                    mx=max(mx,i-last-1);
                    last=i;
                }
            }
            mx=max(mx,n-last-1);
            if(mx<k){
                ok=true;
                break;
            }
        }
        if(ok)
            r=k;
        else
            l=k+1;
    }
    cout<<l<<'\n';
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        string s;
        cin>>s;
        solve(s);
}