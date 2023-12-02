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
        int m=n-1;
        int mx=1;
        for(int i=0;i<20;i++)
        {
            if(m&(1<<i))
                mx=(1<<i);
        }
        for(int i=1;i<mx;i++)
            cout<<i<<' ';
        cout<<0<<' ';
        for(int i=mx;i<n;i++)
            cout<<i<<' ';
        cout<<'\n';
    }
	return 0;
}
