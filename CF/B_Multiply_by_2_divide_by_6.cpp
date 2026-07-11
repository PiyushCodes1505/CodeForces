#include <iostream>
using namespace std;
using ll=long long;

void solve(ll& n){
		ll cnt3=0;
		ll cnt2=0;
		while(n>0 && n%3==0){
			cnt3++;
			n/= 3;
		}
		while(n >0 && n%2==0){
			cnt2++;
			n/=2;
		}
		if(n>1 || cnt2>cnt3)
			cout<<-1<<"\n";
		else
			cout<<cnt3+(cnt3-cnt2)<<"\n";
}
int main(){
	ll t;
    cin>>t;
	while (t--){
		ll n;
		cin >> n;
        solve(n);
	}
	return 0;
}