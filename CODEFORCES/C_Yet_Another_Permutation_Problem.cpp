#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define ll long long int
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector<int>a;
void SieveOfEratosthenes(int n)
{
    int prime[n+3];
    memset(prime,0,sizeof(prime));
    for(int i=1;i<=n;i+=2){
        if(prime[i]==0){
            for(int j=i;j<=n;j*=2){
                a.push_back(j);
                prime[j]=1;  
            }
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a.clear();
}

int main() {
    Faster;
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        SieveOfEratosthenes(n);
        
    }
	return 0;
}
