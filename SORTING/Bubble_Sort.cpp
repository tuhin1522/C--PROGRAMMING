#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        bool Swap = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]>a[j]){
                Swap = true;
                swap(a[j+1],a[j]);
            }
        }
        if(!Swap){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}