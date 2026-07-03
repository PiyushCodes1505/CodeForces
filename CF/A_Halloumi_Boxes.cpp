#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        if(k>1){
            cout<<"YES\n";
        }else{
            bool ok=1;
            for(int i=1;i<n;i++){
                if(a[i]<a[i-1]){
                    ok=0;
                    break;
                }
            }
            cout<<(ok?"YES":"NO")<<"\n";
        }
    }
    return 0;
}