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
        string s;
        cin>>s;
        cout<<s;
        for(int i=s.size()-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<endl;
         
    }
	return 0;
}
