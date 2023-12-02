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
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        if(((a1+b2)==a2 && b1==a2) || ((a2+b1)==a1 && b2==a1)){
            cout<<"Yes"<<endl;
        }
        else if(((a1+a2)==b1 && b1==b2) || ((b1+b2)==a2 && a1==a2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}