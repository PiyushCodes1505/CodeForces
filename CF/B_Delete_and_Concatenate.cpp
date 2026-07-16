#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
using ll=long long;

void solve(int& n,ll& c,vector<ll>& a){
    vector<ll>dp(n+1,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        dp[i+1]=dp[i];
        while(!st.empty()&&a[st.top()]<=a[i]){
            int j=st.top();
            st.pop();
            dp[i+1]=max(dp[i+1],dp[j]+c-a[j]+dp[i]-dp[j+1]);
        }
        if(!st.empty()){
            int j=st.top();
            dp[i+1]=max(dp[i+1],dp[j]+c-a[i]+dp[i]-dp[j+1]);
        }
        st.push(i);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
        ans+=a[i]-c;
    cout<<ans+dp[n]<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll c;
        cin>>n>>c;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        solve(n,c,a);
    }
    return 0;
}