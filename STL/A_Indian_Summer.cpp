#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    vector<pair<string, string>>p;
    int t;cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        p.push_back({a,b});    
    }
    sort(p.begin(),p.end());
    int x = unique(p.begin(),p.end())-p.begin();
    cout<<x<<endl;
}