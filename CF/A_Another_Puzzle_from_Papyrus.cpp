#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t; 
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans1=0;
        bool ok1=true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                ok1=false;
                break;
            }
            ans1+=(a[i]-b[i]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ans2=c;
        bool ok2=true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                ok2=false;
                break;
            }
            ans2+=(a[i]-b[i]);
        }
        if(!ok1 && !ok2){
            cout<<-1<<endl;
        }
        else if(ok1 && ok2){
            cout<<min(ans1,ans2)<<endl;
        }
        else if(ok1){
            cout<<ans1<<endl;
        }
        else{
            cout<<ans2<<endl;
        }

    }

    return 0;
}