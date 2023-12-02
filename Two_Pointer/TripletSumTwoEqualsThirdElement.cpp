#include<bits/stdc++.h>
using namespace std;
int value1,value2;

void solve(int a[], int n)
{
    for(int i=n-1;i>=0;i++){
        int x = a[i];
        int left=0;
        int right=left-1;
        while(left<right)
        {
            int sum = a[left]+a[right];
            if(sum==x){
                cout<<"("<<x<<","<<a[left]<<","<<a[right]<<")"<<endl;
            }
            if(sum>x) right--;
            else left++;
        }
    }
    cout<<"No such Triplates exit."<<endl;
}

int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    solve(a,n);
}