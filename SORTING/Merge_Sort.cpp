#include<bits/stdc++.h>
using namespace std;
int b[101];
void Merge(int a[], int l,int mid, int r)
{
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k]= a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            k++;
            i++;
        }
    }
    for(k=l;k<=r;k++){
        a[k]= b[k];
    }
}

void Merge_Sort(int a[],int l, int r)
{
    if(l<r){
        int mid = l + (r-l)/2;
        Merge_Sort(a,l,mid);
        Merge_Sort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Merge_Sort(a,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}