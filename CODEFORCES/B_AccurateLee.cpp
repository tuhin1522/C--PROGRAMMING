#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string a="";
        if(is_sorted(s.begin(),s.end())){
            cout<<s<<endl;
            continue;
        }
        int last0=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='0') last0=i;
        }
        for(int i=0;i<n && s[i]!='1';i++){
            a.push_back(s[i]);
        }
        for(int i=last0;i<n;i++){
            a.push_back(s[i]);
        }
        cout<<a<<endl;
    }
}
