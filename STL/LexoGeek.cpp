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
    while(t--)
    {
        string s;
        cin>>s;
        bool x = next_permutation(s.begin(),s.end());
        if(x==0){
            cout<<"no answer"<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}