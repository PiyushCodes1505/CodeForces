#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int x){
        int d=to_string(x).size();
        long long y=1;
        while(d--){
            y*=10;
        }
        cout<<y+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        solve(x);
    }
    return 0;
}