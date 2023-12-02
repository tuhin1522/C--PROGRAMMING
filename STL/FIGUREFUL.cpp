#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p;
    map<pair<int,int>,string>m;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>p.first;
        cin>>p.second;
        string s;
        cin>>s;
        m[p] = s;
    }
    int q;
    cin>>q;
    while (q--)
    {
        pair<int,int>test;
        cin>>test.first;
        cin>>test.second;
        cout<<m[test]<<endl;
    }
    
}