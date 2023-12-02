#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len,start=0,end;
    cin>>n;
    len = 2*n-1;
    end = len-1;
    int a[len][len];
    while(n>0)
    {
        for(int i=start;i<=end;i++){
            for(int j=start;j<=end;j++){
                if(i==start || i==end || j==start || j==end){
                    a[i][j] =n;
                }
            }
        }
        start++;
        end--;
        n--;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}