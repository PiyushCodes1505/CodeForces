#include <iostream>
#include <map>
#include <vector>
using namespace std;

using ll=long long;
void solve(int& n,int& x,int& y){
		vector<int> a(n,0);
		map<int,vector<int>>mp;

		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]%y].push_back(a[i]);
		}
		ll ans = 0;
		for(auto it:mp){
			vector<int> v=it.second;
			map<int,ll>mp1;

			for (int i=0;i<v.size();i++){
				mp1[v[i]%x]++;
			}

			for (auto it:mp1){
				if(it.first==0 || (it.first==x/2 && x%2==0)){
					ll cnt=it.second;
					ans+=(cnt*(cnt-1))/2;
					it.second=0;
				}else{
					ll cnt1=it.second;
					ll cnt2=mp1[x-it.first];
					ans+=cnt1*cnt2;
					mp1[x-it.first]=0;
				}
			}
		}
		cout << ans << endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin >>n>>x>>y;
        solve(n,x,y);
	}
    return 0;
}
