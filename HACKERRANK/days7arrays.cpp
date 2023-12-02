#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];  
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int begin=0;
    int end = n-1;
    while(begin<end){
        swap(a[begin], a[end]);
        begin++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}