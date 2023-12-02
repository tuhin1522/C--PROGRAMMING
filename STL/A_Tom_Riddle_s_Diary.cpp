#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;cin>>n;
    map<string,bool>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        
        if(m[s]==1) cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
        m[s]=1;
    }
}
/*
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if(a[i]==a[j]){
            c=1;
        }
    }
    if(c==1){
        cout<<"YES"<<endl;}
        else{
        cout<<"NO"<<endl;
 
    }
    c=0;
}
*/