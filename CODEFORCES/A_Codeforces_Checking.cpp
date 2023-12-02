#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
    string s="codeforces";
    char ch;
    cin>>ch;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}