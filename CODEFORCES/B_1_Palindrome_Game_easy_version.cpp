#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cnt++;
        }
        if(cnt%2==0 && cnt>1){
            cout<<"BOB"<<endl;
        }
        else if(cnt==1) cout<<"BOB"<<endl;
        else if(cnt==0) cout<<"DRAW"<<endl;
        else cout<<"ALICE"<<endl;
    }
}
