#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    string s,s2;
    cin>>s>>s2;
    int cnt=0;
    map<int,int>a,b;
    for(int i=0;i<s.size();i++){
        ++a[s[i]-'a'];
    }
    for(int i=0;i<s2.size();i++){
        ++b[s2[i]-'a'];
    }
    for(int i=0;i<26;i++){
        if(b[i]){
            if(a[i]){
                cnt += min(a[i],b[i]);
            }
            else{
                cnt=0;
                break;
            }
        }
    }
    if(cnt) cout<<cnt<<endl;
    else cout<<-1<<endl;
}
