#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    map<int,int>m;
    for(auto u:v){
        m[u]++;
    }
    int ans = 0;
    for(auto u:m){
        if(u.first<=u.second){
            ans = ans + (u.second-u.first);
        }
        else ans += u.second;
    }
    cout<<ans<<endl;
}