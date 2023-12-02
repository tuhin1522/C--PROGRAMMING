#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first){
        return 1;
    }
    else if(p1.first==p2.first) return p1.second<p2.second;
    return 0;
}

int main()
{
    optimize();
    vector< pair <int, int> > v;
    int n,k,count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);

    for(auto u:v){
        if(u==v[k-1]) count++;
    }
    cout<<count<<endl;
}