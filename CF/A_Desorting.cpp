#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long op=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+ 1]){
                long long dif=a[i+1]-a[i];
                long long reqOp=dif/2+1;
                op=min(op,reqOp);
            }else{
                op=0;
            }
        }
        cout<<op<<"\n";
    }
    return 0;
}