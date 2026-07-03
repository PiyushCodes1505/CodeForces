#include <iostream>
#include <vector>

using namespace std;

void Triples(){
    long long n;
    cin>>n;
    long long ans=0;
    for(long long b=1;b<=n;b++){
        long long mult=n/b;
        ans+=mult*mult;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Triples();

    }
    return 0;
}