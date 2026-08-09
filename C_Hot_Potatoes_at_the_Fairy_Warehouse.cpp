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

void solve(ll& n,ll& k,string& s){
    ll red=0;
    ll N=2*n;
    for(ll i=0;i<N;i++){
        if(s[i]=='1'){
            ll j=(i+1)%N;

            if(s[j]=='1'){
                if(i%2==1) red++;
            }
            else{
                if(j%2==1) red++;
            }
        }
    }
    cout<<red<<" "<<count(s.begin(),s.end(),'1')-red<<"\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    solve(n,k,s);
    }

    return 0;
}