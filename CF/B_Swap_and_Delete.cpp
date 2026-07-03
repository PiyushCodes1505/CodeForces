#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int zero=0,ones=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0') zero++;
            else ones++;
        }
        int prefixZero=0;
        int prefixOne=0;
        int maxLen=n;

        for(int i=0;i<n;i++){
            if(s[i]=='0') prefixZero++;
            else prefixOne++;

            if(prefixZero>ones || prefixOne>zero){
                maxLen=i;
                break;
            }
        }
        cout<<n-maxLen<<"\n";
    }

    return 0;
}