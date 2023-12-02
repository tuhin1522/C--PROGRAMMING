#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<string,int>cnt;
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            cnt[x]++;
        }
        int result=0;
        for(auto u: cnt){
            if(u.second==2){
                result++;
            }
        }
        cout<<result<<endl;
    }
    
    
}