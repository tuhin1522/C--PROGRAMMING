#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a = y/z;
        if(y%z==0)
        {
            cout<<x*a<<endl;
        }
        else
        {
            int b = a+1;
            cout<<x*b<<endl;
        }
    }
}