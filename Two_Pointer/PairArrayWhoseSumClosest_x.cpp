#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n,int x)
{
    int left=0;
    int right=n-1;
    int index1,index2;
    int diff = INT_MAX;
    while(left<right)
    {
        int sum = a[left] + a[right];
        if(abs(sum-x)<diff){
            index1 = left;
            index2 = right;
            diff = abs(sum-x);
        }
        if(sum>x) right--;
        else left++;
    }
    cout<<"("<<a[index1]<<" "<<a[index2]<<")"<<" "<<a[index1]+a[index2]<<endl;
}

int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x;  cin>>x;
    solve(a,n,x);
}