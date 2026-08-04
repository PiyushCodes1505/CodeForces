#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
#include <climits>

using namespace std;

using ll=long long;

void solve(int n,string s){
        int grps=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])grps++;
        }
        int ans=grps;
        for(int i=1;i<n-1;i++){
            int cur=grps;
            cur -=(s[i-1]!=s[i]);
            cur-=(s[i]!=s[i + 1]);
            cur+=(s[i-1]!=s[i + 1]);
            ans=min(ans,cur);
        }
        cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;

        solve(n,s);
    }
    return 0;
}