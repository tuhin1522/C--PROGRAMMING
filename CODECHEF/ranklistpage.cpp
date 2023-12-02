#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%25==0)
        {
            int a = x/25;
            cout<<a<<endl;
        }
        else
        {
            int b = x/25 + 1;
            cout<<b<<endl;
        }
    }
}