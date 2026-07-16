#include <iostream>
#include <string>
using namespace std;

void solve(int n,int k,string s){
        if(2*k>n){
            cout<<-1<<"\n";
            return;
        }
        int ans=0;
        for(int i=0;i<k;i++){
            if(s[i]=='L')
                ans++;
        }
        for(int i=n-k;i<n;i++){
            if(s[i]=='R')
                ans++;
        }
        cout << ans << "\n";
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(n,k,s);
    }
    return 0;
}