#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        char ch = 's';
        if(s[4]==':'){
            s.insert(s.begin()+4,1,ch);
            cout<<"Case "<<i<<": "<<s<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<s<<endl;
        }
    }
}