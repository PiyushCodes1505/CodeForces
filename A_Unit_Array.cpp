#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& a,int& n){
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) pos++;
        else neg++;
    }
    int ans=0;
    if(pos<neg){
        int need=(neg-pos+1)/2;
        ans+=need;
        pos+=need;
        neg-=need;
    }
    if(neg%2) ans++;
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        solve(a,n);
    }
    return 0;
}