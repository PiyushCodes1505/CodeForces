#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& a,int& n,int& k){
    if(k!=4){
        int ans=1e9;
        for(int i=0;i<n;i++){
            ans=min(ans,(k-a[i]%k)%k);
        }
        cout<<ans<<"\n";
        return;
    }
    int even=0;
    int ans=1e9;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even++;
        ans=min(ans,(4-a[i]%4)%4);
    }
    if(even>=2){
        cout<<0<<"\n";
    }
    else if(even==1){
        cout<<min(ans,1)<<"\n";
    }
    else{
        cout<<min(ans,2)<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        solve(a,n,k);
    }
    return 0;
}