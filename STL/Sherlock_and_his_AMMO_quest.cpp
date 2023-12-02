#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<string,int>&a,const pair<string,int>&b)
{
    if(a.second>b.second) return 1;
    else if(a.second==b.second) return a.first<b.first;
    return 0;
}

int main() {
    int n;cin>>n;
    vector<pair<string,int>>m;
    for(int i=0;i<n;i++){
        string x;
        int y; cin>>x>>y;
        m.push_back({x,y});
    }
    sort(m.begin(),m.end(),cmp);
    for(auto u:m){
        cout<<u.first<<" "<<u.second<<endl;
    }

}

