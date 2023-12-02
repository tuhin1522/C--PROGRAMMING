#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            int a=2;
            for(int i=1;i<=n;i++){
                cout<<a<<" ";
                a += 2;
            }
        }
        else{
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}