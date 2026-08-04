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

void solve(string a,string b,int n){
    vector<int> ae, ao, be, bo;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i&1) ao.push_back(i);
            else ae.push_back(i);
        }
        if(b[i]=='1'){
            if(i&1)bo.push_back(i);
            else be.push_back(i);
        }
    }
    if(ae.size()!=be.size() || ao.size()!=bo.size()){
        cout<<-1<<"\n";
        return;
    }
    ll ans=0;
    for(int i=0;i<ae.size();i++)
        ans+=(abs(ae[i]-be[i]))/2;
    for(int i=0;i<ao.size();i++)
        ans+=(abs(ao[i]-bo[i]))/2;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        solve(a,b,n);
    }

    return 0;
}