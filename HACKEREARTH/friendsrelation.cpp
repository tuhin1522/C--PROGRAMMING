#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int row=1;row<=n;row++){
            for(int col=-n;col<=n-1;col++){
                if(-(n-row)<=col && col<(n-row))
                {
                    cout<<"#";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
    
}