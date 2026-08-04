#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
#include <climits>

using namespace std;

using ll=long long;

void solve(string a,string b,int n){
    if(a==b){ 
        cout<<"YES"<<"\n";
        return;
    }
    if(n<3){
        cout<<"NO"<<"\n";
        return;
    }
    int oddA,evenA,oddB,evenB;
    oddA=evenA=0;
    oddB=evenB=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2!=0)oddA++;
            else evenA++;
        }
        if(b[i]=='1'){
            if(i%2!=0)oddB++;
            else evenB++;
        }
    }
    if(oddA==oddB && evenA==evenB) cout<<"YES\n";
    else cout<<"NO\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        solve(a,b,n);
    }

    return 0;
}