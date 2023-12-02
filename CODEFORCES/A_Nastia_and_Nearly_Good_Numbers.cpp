#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t; 
    cin >> t;
    while(t--) {
        ll a,b;
        cin>>a>>b;
        ll x,y,z;
        if(b==1) cout<<"NO"<<endl;
        else if(b==2){
            cout<<"YES"<<endl;
            if(a==1) cout<<3<<" "<<1<<" "<<4<<endl;
            else{
                b=a*b;
                z=a*b;
                x=a*(b-1);
                y=a;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
            
        }
        else{
            cout<<"YES"<<endl;
            z = a*b;
            x = a;
            y = a*(b-1);
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
	return 0;
}
