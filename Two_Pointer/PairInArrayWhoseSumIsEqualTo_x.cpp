#include<bits/stdc++.h>
using namespace std;
int value1,value2;

bool solve(int a[],int x,int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum = a[i]+a[j];
        if(sum==x){
            value1 = a[i];
            value2 = a[j];
            return true;
        }
        if(sum>x) j--;
        else i++;
    }
    return false;
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
    bool ans = solve(a,x,n);
    if(ans==true){
        cout<<"YES"<<endl;
        cout<<value1<<" "<<value2<<endl;
    }
    else cout<<"NO"<<endl;
}