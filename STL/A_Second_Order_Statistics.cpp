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
    set<int>:: iterator it;
    it=s.begin();
    advance(it,1);
    if(s.size()>1){
        cout<<*it<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
/*
if(s.size()==1) cout<<"NO"<<endl;
else cout<<*(++s.begin())<<endl;
*/