#include <iostream>
#include <string>

using namespace std;
using ll=long long;

void solve(string s){
    int n=s.size();
    ll ab=0;
    ll ba=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
			if (s[0] == 'a')
				s[0] = 'b';
			else
				s[0] = 'a';
        }
    }
    cout<<s<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}