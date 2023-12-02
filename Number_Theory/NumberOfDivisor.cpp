#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
set<int>s;

void countDivisor(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            int x=i;
            int y=n/i;
            s.insert(x);
            s.insert(y);
        } 
    }
}

int main()
{
    int t;      cin>>t;
    while(t--)
    {
        int n;      cin>>n;
        countDivisor(n);
        cout<<"Count: "<<s.size()<<endl;
        for(auto it: s) cout<<it<<" ";
        cout<<endl;
        s.clear();
    }
}
 