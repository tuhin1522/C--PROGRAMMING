#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        ll r,c;
        cin>>r>>c;
        if(r==c){
            cout<<(r*r-(r-1))<<endl;
        }
        else{
            ll diagonal = max(r,c);
            diagonal = diagonal*diagonal - (diagonal-1);
            if(r>c){
                if(r%2 != 0){
                    diagonal -= (r-c);
                }
                else{
                    diagonal += (r-c);
                }
            }
            else if(r<c){
                if(c%2!=0){
                    diagonal += (c-r);
                }
                else{
                    diagonal -= (c-r);
                }
            }
            cout<<diagonal<<endl;
        }
    }
	return 0;
}
