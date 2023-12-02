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
        Faster;
        int n,a,b,c,d; 
        cin>>n>>a>>b>>c>>d;
        int esub = a-b;
        int esum = a+b;
        int nsub = c-d;
        int nsum = c+d;
        int count=0;
        if (esum*n < nsub || nsum < n*esub)
		    cout << "No\n";
		else
		    cout << "Yes\n";
        
    }
}
    