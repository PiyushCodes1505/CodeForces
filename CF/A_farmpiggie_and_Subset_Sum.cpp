#include <iostream>
using namespace std;

void solve(int &n){
    for(int i=1;i<=n;i+=2){
        cout<<i+1<<" "<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}