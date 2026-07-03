#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int& n,string& s){
    int cnt=0;
    vector<int> ones(n),zeros(n);

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
        ones[i]=cnt;
    }

    cnt=0;

    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            cnt++;
        }
        zeros[i]=cnt;
    }

    int f=0;

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(ones[i]%2==1){
                f=1;
                break;
            }else{
                f=0;
            }
        }else{
            if(zeros[i]%2==1){
                f=1;
                break;
            }else{
                f=0;
            }
        }
    }

    if(f==0){
        cout<<"Bob"<<"\n";
    }else{
        cout<<"Alice"<<"\n";
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        solve(n,s);
    }

    return 0;
}