#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=1 &&n<=10){
            cout<<"Lower Double"<<endl;
        }
        else if(n>=11 &&n<=15){
            cout<<"Lower Single"<<endl;
        }
        else if(n>=16 &&n<=25){
            cout<<"Upper Double"<<endl;
        }else if(n>=26 &&n<=30){
            cout<<"Upper Single"<<endl;
        }
    }
}