#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        
        if(m[s]>=1) cout<<s<<m[s]<<endl;
        else 
            cout<<"OK"<<endl;
        m[s]++;
    }
}
/*
map<string, int> registration;
    string s;
    while (n--)
    {
        cin >> s;
        if (registration.count(s) == 0)
        {
            cout << "OK" << endl;
            registration[s] = 1;
        }
        else
        {
            cout << s << registration[s] << endl;
            registration[s] += 1;
        }
    }
*/