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
        int a[n];
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            //v[i] = a[i]+1;
            v.push_back(a[i]+1);
        }
        for(int i=1;i<n;i++){
            if(v[i]%v[i-1]==0){
                v[i]++;
            }
        }
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;
    }
}