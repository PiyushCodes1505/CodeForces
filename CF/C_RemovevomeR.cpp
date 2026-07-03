#include <iostream>
#include <string>
using namespace std;

void solve(int n,string s){
    bool same=true;
    for(int i=1;i<n;i++){
        if(s[i]!=s[0]){
            same=false;
            break;
        }
    }
    if(same){
        cout<<1<<"\n";
        return;
    }
    int cnt=0;
    for(int i=1;i<n ; i++){
        if(s[i]!=s[i-1])cnt++;
        
    }
    if(cnt<=1)cout<<2<<"\n";
    else cout<<1<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(n,s);
    }
    return 0;
}