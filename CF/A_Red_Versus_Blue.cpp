#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
using ll=long long;

void solve(int n,int r,int b){
    string s="";
    int lenR=r/(b+1);
    int extR=r%(b+1);
    for(int i=1;i<=b+1;i++){
        for(int j=0;j<lenR;j++){
            s+="R";
        }if(extR>0){
            s+="R";
            extR--;
        }if(i!=b+1){
            s+="B";
        }
    }
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        solve(n,r,b);
    }
}