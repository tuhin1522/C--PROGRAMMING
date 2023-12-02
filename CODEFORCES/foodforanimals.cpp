#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if((a+c)>=x && (b+c)>=y && (a+b+c)>=(x+y)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}