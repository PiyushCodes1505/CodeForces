#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        string s;
        cin >> s;
        

        bool len3 = false;
        int empty = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                len3=true;
                break;
            }
            if(s[i]=='.') empty++;
        }
        if(len3==true)cout<<2<<endl;
        else
            cout<<empty<<endl;
    }
    return 0;
}