#include <bits/stdc++.h> 
using namespace std;

#define int long long

void solve(string s,string t){
    int n=s.size();
	int m=t.size();
    vector<int>freq(26,0);
    for(int i=0;i<m;i++) freq[t[i]-'A']++;
    for(int i=n-1;i>=0;i--){
			if(freq[s[i]-'A']>0)
				freq[s[i]-'A']--;
			else s[i] = '.';
		}
    string final = "";
	for(int i=0;i<n;i++){
			if (s[i]!='.') final += s[i];
		}
    if(final==t)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s,t;
		cin>>s>>t;
        solve(s,t);
    }
}