#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,second;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
 
        }
        int minimum_time = 1000000;
        for(int i=0;i<n;i++){
            if(a[i]<minimum_time){
                minimum_time = a[i];
            }
        }
        if(k>minimum_time){
            second = k - minimum_time;
            cout<<second<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}