#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(2*x>5*y)
        {
            cout<<"Chocolate"<<'\n';
        }
        else if(2*x==5*y)
        {
            cout<<"Either"<<'\n';
        }
        else{
            cout<<"Candy"<<'\n';
        }
    }
}