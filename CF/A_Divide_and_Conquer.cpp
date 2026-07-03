#include <iostream>
using namespace std;

    void solve(int& x,int& y){
        if(x%y==0){
            cout<< "YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        int y;
        cin>>x>>y;
        solve(x,y);
    }
    return 0;

}