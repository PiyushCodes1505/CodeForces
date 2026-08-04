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
bool donate(int &a,int &b,int &c){
    if(a==b || b==c || a==c) return false;

    if(a>b && a>c){
        a--;
        if(b<c) b++;
        else c++;
    }
    else if(b>a && b>c){
        b--;
        if(a<c) a++;
        else c++;
    }
    else{
        c--;
        if(a<b) a++;
        else b++;
    }

    return true;
}
void solve(int a,int b,int c){
    int rnd=0;
    while(donate(a,b,c)){
        rnd++;
    }
    cout<<rnd<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }

    return 0;
}