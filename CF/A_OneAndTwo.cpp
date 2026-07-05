
using namespace std;

void solve(vector<int>& a,int& n,int& total){
        int curr = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == 2) curr++;

            if (curr == total - curr) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << "\n";
    }        

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2)total++;
        }
        solve(a,n,total);
    }
}