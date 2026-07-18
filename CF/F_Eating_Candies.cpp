#include <iostream>
#include <vector>
using namespace std;
using ll=long long;

void solve(vector<int> a,int n){
    int l=0;
    int r=n-1;
    ll ls=0;
    ll rs=0;
    int ans=0;
    while(l<=r){
        if(ls<=rs){
            ls+=a[l];
            l++;
        }
        else{
            rs+=a[r];
            r--;
        }
        if(ls==rs){
            ans=l+(n-1-r);
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        solve(a,n);
    }
}