#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int ln = s.size();
    map<char,int>m;
    int cnt=0;
    char ans=0;
    for(int i=0;i<ln;i++){
        m[s[i]]++;
        if(cnt < m[s[i]]){
            ans = s[i];
            cnt = m[s[i]];
        }
    }
    cout<<ans<<endl;
}