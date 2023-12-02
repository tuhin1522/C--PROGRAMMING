#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && b>c)
        {
            cout<<b<<'\n';
        }
        else if(b>a && a>c){
            cout<<a<<'\n';
        }
        else if(b>c && c>a){
            cout<<c<<'\n';
        }
        else if(c>b && b>a){
            cout<<b<<'\n';
        }
        else if(a>c && c>b)
        {
            cout<<c<<'\n';
        }
        else if(c>a && a>b)
        {
            cout<<a<<'\n';
        }
    }
}
