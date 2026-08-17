#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define int long long

void solve(int n,int m){
    bool have[26]={false};
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
        have[s[0]-'a']=true;
    }

    vector<string> a(m);

    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    vector<bool> done(m,false);
    int cnt=0;

    while(true){
        bool changed=false;

        for(int i=0;i<m;i++){
            if(done[i]) continue;

            bool ok=true;

            for(char c:a[i]){
                if(!have[c-'A']){
                    ok=false;
                    break;
                }
            }

            if(ok){
                done[i]=true;
                cnt++;
                have[a[i][0]-'A']=true;
                changed=true;
            }
        }

        if(!changed) break;
    }

    cout<<(cnt==m ? "YES\n" : "NO\n");
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
        solve(n,m);
    }
}