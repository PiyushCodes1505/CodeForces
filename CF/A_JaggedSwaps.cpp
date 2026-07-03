#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& a,int& n){
    if(a[0]==1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    }


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(a,n);
    }
    return 0;
}
