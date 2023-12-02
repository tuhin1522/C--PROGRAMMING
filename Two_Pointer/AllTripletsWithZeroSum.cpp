#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
    for(int i=0;i<n;i++){
        unordered_set<int>s;
        for(int j=i+1;j<n;j++){
            int x = -(a[i]+a[j]);
            if(s.find(x) != s.end()){
                cout<<"("<<x<<","<<a[i]<<","<<a[j]<<")"<<endl;
            }
            else{
                s.insert(a[j]);
            }
        }
    }
}

int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    solve(a,n);
}