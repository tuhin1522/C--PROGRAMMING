#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int b[],int n,int m,int x)
{
    int left=0;
    int right=m-1;
    int index1,index2;
    int diff = INT_MAX;
    while(left<n && right>=0)
    {
        int sum = a[left] + b[right];
        if(abs(sum-x)<diff){
            index1 = left;
            index2 = right;
            diff = abs(sum-x);
        }
        if(sum>x) right--;
        else left++;
    }
    cout<<"("<<a[index1]<<" "<<b[index2]<<")"<<" "<<a[index1]+b[index2]<<endl;
}

int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int m;  cin>>m;
    int b[m];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    int x;  cin>>x;
    solve(a,b,n,m,x);
}