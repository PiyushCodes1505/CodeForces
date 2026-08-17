#include <iostream>
#include <vector>
using namespace std;

void solve(int n){
    vector<int>p(n+1);
    vector<vector<int>>adj(n+1);
    for(int i=2;i<=n;i++){
        cin>>p[i];
        adj[p[i]].push_back(i);
    }
    int m;
    cin>>m;
    vector<int>dam(n+1,0);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        dam[x]=1;
    }
    vector<int>cnt(n+1,0);
    for(int i=1;i<=n;i++) {
        cnt[i]=dam[i];
    }
    vector<int> ans;
    for(int u=n;u>=1;u--) {
        int skip=-1;
        if(!dam[u]) {
            for(int v:adj[u]) {
                if(cnt[v]>0) {
                    skip=v;
                    break;
                }
            }
        }
        for(int v:adj[u]) {
            if(cnt[v]==0) continue;
            if(v==skip) continue;
            ans.push_back(v);
        }
        if(u!=1) {
            cnt[p[u]]+=cnt[u];
        }
    }
    cout << ans.size();
    for(int x:ans)cout<<" "<<x;
    cout<<"\n";
}
int main() {
    int t;
    cin >> t;

    while(t--) {
    int n;
    cin >> n;
        solve(n);
    }
}