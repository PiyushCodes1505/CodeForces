#include<iostream>
using namespace std;

using ll=long long;

void solve(ll& a,ll& b,ll& c){
        ll newA=2*b-c;
        ll newB=(a+c)/2;
        ll newC=2*b-a;
        bool ans=false;
        if(newA/a>0 && newA%a==0){
            ans=true;
        }
        if(newB/b>0 && newB%b==0 && (c-a)%2==0){
            ans=true;
        }
        if(newC/c>0 && newC%c==0){
            ans=true;
        }
        if(ans){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        ll a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
    return 0;
}