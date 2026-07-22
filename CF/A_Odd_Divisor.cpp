#include <iostream>
using namespace std;

void solve(long long n){
    while(n>1){
        if(n%2==0){
            n=n/2;
        }else{
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        solve(n);
    }
    return 0;
}