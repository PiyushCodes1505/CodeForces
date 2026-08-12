#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <climits>
#include <numeric>
using namespace std;

#define int long long

void solve(int n,vector<int>a){
    int k=abs(a[0]-1);
    for(int i=1;i<n;i++){
        k=std::gcd(k,abs(a[i]-(i+1)));
    }
    cout<<k<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        solve(n,a);
    }
    return 0;
}