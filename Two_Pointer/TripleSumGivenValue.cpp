#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n,int x)
{
    int fount=0;
    for(int i=0;i<n;i++){
        int left = i+1;
        int right = n-1;
        while(left<right){
            int sum = a[i] + a[left] + a[right];
            if(sum==x){
                cout<<"("<<a[i]<<","<<a[left]<<","<<a[right]<<")"<<endl;
                fount=1;
            }
            if(sum>x) right--;
            else left++;
        }
    }
    if(fount==0){
        cout<<"Triplet not found";
    }
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