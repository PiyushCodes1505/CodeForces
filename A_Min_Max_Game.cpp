#include <iostream>
#include <vector>

using namespace std;

void solve(int n){
    int ones=0;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1) ones++;
    }
    
    if(ones>=(n+1)/2)
        cout<<"Bessie\n";
    else
        cout<<"Elsie\n";
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