#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll array[n];
        for(ll i=0;i<n;i++)
        {
            cin>>array[i];
        }
        sort(array+1,array+n);
        for(ll i=1;i<n;i++){
            if(array[i]>array[0]){
                if((array[i]+array[0])%2==0){
                    array[0] = (array[i]+array[0])/2;
                }
                else{
                    array[0] = (array[i]+array[0])/2+1;
                }
            }
        }
        cout<<array[0]<<endl;
    }  
}