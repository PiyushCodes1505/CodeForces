#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k){
        if(k<n||k>2*n-1){
            cout<<-1<<"\n";
            return;
        }

        vector<vector<int>> a(n,vector<int>(n,0));

        int x=k-n;
        int val=1;

        a[0][0]=val++;

        for(int j=1;j<=x;j++){
            a[0][j]=val++;
        }

        for(int i=1;i<=x;i++){
            a[i][0]=val++;
        }

        for(int i=x+1;i<n;i++){
            a[i][i]=val++;
        }
        int cur=n*n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0)
                    a[i][j]=cur--;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<(j==n-1?'\n':' ');
            }
        }
    }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){    
    int n,k;
    cin>>n>>k;
    solve(n,k);
    }
    return 0;
}