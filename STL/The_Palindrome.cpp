#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        string x;
        for(int i=s.size()-1;i>=0;i--){
            x.push_back(s[i]);
        }
        
        if(s==x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}