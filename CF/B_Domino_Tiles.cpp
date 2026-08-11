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


const ll mod=998244353;

ll ways(string &s,int start){
    int cnt=0;
    for(int x=0;x<2;x++){
        bool ok=1;
        for(int i=start;i<s.size();i+=2){
            int val=((i-start)/2+x)%2;
            if(s[i]!='?'&&s[i]-'0'!=val){
                ok=0;
                break;
            }
        }
        cnt+=ok;
    }
    return cnt;
}

void solve(int n,string s){
    ll a=ways(s,0);
    ll b=ways(s,1);
    cout<<a*b%mod<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
    int n;
    string s;
    cin>>n>>s;
    solve(n,s);
    }

    return 0;
}