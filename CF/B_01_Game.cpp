#include <iostream>
#include <string>
using namespace std;

void solve(string s){
    	int cnt1=0;
		int cnt0=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='0')
				cnt0++;
			else
				cnt1++;
		}
		int op=min(cnt0,cnt1);
		if(op%2!=0)
			cout<<"DA\n";
		else
			cout<<"NET\n";
}
int main(){
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
        solve(s);
	}
	return 0;
}
