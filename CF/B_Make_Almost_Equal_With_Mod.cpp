#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll=long long;
void solve(vector<ll>& arr,int& n){
		ll ans = 0;
		for (int i=1;i<=60;i++){
			set<ll> distvals;
			ll k=1LL<<i;
			for(int idx=0;idx<n;idx++){
				distvals.insert(arr[idx]%k);
			} 
			if(distvals.size()==2){
				ans=k;
				break;
			}
		}
		cout << ans << endl;
    }
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
        vector<ll> arr(n);
		for (int i=0;i<n;i++)
			cin>>arr[i];
            solve(arr,n);
	}
    return 0;
}