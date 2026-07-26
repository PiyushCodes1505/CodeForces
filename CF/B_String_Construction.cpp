#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;

void solve(int n,int k){
    if(k==n-1) { 
        cout<<-1<<"\n";
        return;
    }
    string s="";
    int B=n-k;
    int N0=(B+1)/2;
    int N1=B/2;
    int C0=(n+1)/2;
    int C1=n/2;
    vector<int> len0(N0,1);
    len0[N0-1]=C0-(N0-1);
    vector<int> len1(N1,1);
    if(N1>0){
        len1[N1-1]=C1-(N1-1);
    }
    int idx0=0,idx1=0;
    for(int i=0;i<B;++i){
        if(i%2==0){
            s.append(len0[idx0++],'0');
        }else{
            s.append(len1[idx1++],'1');
        }
    }
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}