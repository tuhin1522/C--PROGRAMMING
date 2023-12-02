#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            brr[i]==arr[i];
        }
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==arr[n-1]){
                count=1;
            }
            else{
                count=0;
                break;
            }
        }
        if(count !=0 && n !=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}