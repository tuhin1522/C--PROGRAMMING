#include<bits/stdc++.h>
using  namespace  std;

int Ceil(int ar[],int l,int r,int x)
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
        else if(ar[mid]>x)
        {
            ans=ar[mid];
            r=mid-1;
        }
        else l=mid+1;
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
    cout<<Ceil(ar,0,n-1,x)<<endl;
    return 0;
}