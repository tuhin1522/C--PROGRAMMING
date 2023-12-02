#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;cin>>n;
    set<int>s;
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int p;
        cin>>p;
        s.insert(p);
    }
    int y;cin>>y;
    for(int i=0;i<y;i++){
        int q;
        cin>>q;
        s.insert(q);
    }
    int sz = s.size();
    if(sz==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}