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
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto u:s){
        cout<<u<<" ";
    }
    cout<<endl;
    int a;cin>>a;
    if(s.count(a)){
        cout<<"erased "<<a<<endl;
        s.erase(a);
    }
    else cout<<"not found";
    for(auto u:s){
        cout<<u<<" ";
    }
}