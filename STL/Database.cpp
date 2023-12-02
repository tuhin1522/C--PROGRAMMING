#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;cin>>t;
    for(int j=1;j<=t;j++){
        int n,m;
        cin>>n>>m;
        int x,y;
        map<pair<int,int>,bool>mp;
        int ans=1;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            if(mp[{x,y}]) ans=0;
            mp[{x,y}]=1;
            
        }
        if(ans==1) cout<<"Scenario #"<<j<<": "<<"possible"<<endl;
        else cout<<"Scenario #"<<j<<": "<<"impossible"<<endl;
    }
}