#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>m;
        int i, j, count = 0;
        int a[2*n];
        for(i=0; i<2*n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto x: m)
        {
            if(x.second>=3){
                cout<<"No"<<'\n';
                count = 1;
                break;
            }
        }
        if(count==0)
        {
            cout<<"Yes"<<'\n';
        }
    }
    
}