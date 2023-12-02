#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        vector<int>v;
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int ip = unique(v.begin(), v.end())-v.begin();

        if(ip==x){
            cout<<"Good"<<endl;
        }
        else if(x>ip){
            cout<<"Bad"<<endl;
        }
        else{
            cout<<"Average"<<endl;
        }
    }
}