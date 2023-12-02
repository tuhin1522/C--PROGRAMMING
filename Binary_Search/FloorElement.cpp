#include<bits/stdc++.h>
using  namespace  std;

int floor(int ar[],int l,int r,int x)
{
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ar[mid]==x)
        {
            ans=ar[mid];
            break;
        }
        else if(ar[mid]<x)
        {
            ans=ar[mid];
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int i,ar[n+3];
    for(i=0;i<n;i++)cin>>ar[i];
    int x;
    cin>>x;
    cout<<floor(ar,0,n-1,x)<<endl;
    return 0;
}