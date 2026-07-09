#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll=long long;
void solve(vector<int>& a,int& n){
    vector<ll> oddPref(n,0);
    vector<ll> evenPref(n,0);
    evenPref[0]=a[0];
    int flag=0;
    map<ll,int> mp;
    mp[oddPref[0]-evenPref[0]]++;
	for (int i=1;i<n;i++){
		oddPref[i]+=oddPref[i-1];
		evenPref[i]+=evenPref[i-1];
		if(i%2) {
            oddPref[i]+=a[i];
        }else{ 
        evenPref[i]+=a[i];
        }
		mp[oddPref[i]-evenPref[i]]++;
		if(mp[oddPref[i]-evenPref[i]]==2 || oddPref[i]-evenPref[i]==0)
		{
			flag=1;
			break;
		}
	}
    if(flag==1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        solve(a,n);
    }
}