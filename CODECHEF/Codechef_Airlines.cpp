#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x*10>=y){
            int a = y*z;
            cout<<a<<endl;
        }
        else{
            int b = x*10*z;
            cout<<b<<endl;
        }
        
    }
}