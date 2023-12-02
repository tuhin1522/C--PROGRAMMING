#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int midIndex = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[midIndex]){
                midIndex = j;
            }
        }
        if(midIndex != i){
            swap(a[i],a[midIndex]);
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}