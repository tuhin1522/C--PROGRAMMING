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
        int count=0,ans=0;
        for(int i=0;i<n;i++){
            count++;
            if(s[i]!=s[i+1] || i==n-1){
                ans = max(ans,count);
                count=0;
            }
        }
        cout<<ans+1<<endl;
    }
}