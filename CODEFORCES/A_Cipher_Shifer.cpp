#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char sx= s[0];
        string ans=" ";
        for (int i = 1; i < n; i++)
        {
            /* code */
            if(s[i] == sx){
                ans +=sx;
                sx=s[i+1];
                i++;
            }
            
        }
        cout<<ans<<endl;
        
    }
}