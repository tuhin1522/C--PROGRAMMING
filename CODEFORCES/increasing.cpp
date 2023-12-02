#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        set<long long int> s;
        long long int n;
        cin>>n;
        for(long long int i=0; i<n; i++)
        {
            long long int a;
            cin>>a;
            s.insert(a);
        }
        long long int len=s.size();
        cout<<len;
        if(n==len)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}