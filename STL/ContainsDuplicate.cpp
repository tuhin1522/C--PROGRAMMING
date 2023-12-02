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
    int VectorSize = v.size();
    sort(v.begin(),v.end());
    int uq = unique(v.begin(),v.end()) - v.begin();
    if(VectorSize==uq){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}