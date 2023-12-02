#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string tmp;
        vector<string>v;
        for(auto u: s){
            if(isspace(u)){
                v.push_back(tmp);
                tmp.clear();
            }
            else tmp += u;
        }
        v.push_back(tmp);
        int result=0;
        map<string,int>cnt;
        for(auto u: v){
            cnt[u]++;
            result = max(result,cnt[u]);
        }
        string ans;
        for(auto u: v){
            if(cnt[u]==result){
                ans=u;
                break;
            }
        }
        cout<<ans<<" "<<result<<endl;
    }
}