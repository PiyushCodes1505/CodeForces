#include <iostream>
#include <vector>
using namespace std;

void solve(vector<long long>&a,vector<long long>&b,int n){
    long long p=0;
    long long nn=0;
    bool flag=true;
    for(int i=1;i<=n;i++){
        long long d=b[i-1]-a[i-1];
        long long f;
        if(i%2==0){
            f=d;
            if(nn<-f){
                flag=false;
                break;
            }
            p=nn+f;
        }
        else{
            f=-d;
            if(p<f){
                flag=false;
                break;
            }
            nn=p-f;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        solve(a,b,n);
    }
    return 0;
}