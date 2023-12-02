#include<bits/stdc++.h>
using namespace std;

int Partition(int a[], int l,int h)
{
    int pivot = a[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}

void Quick_Sort(int a[],int l, int h)
{
    if(l<h){
        int pivot = Partition(a,l,h);
        Quick_Sort(a,l,pivot-1);
        Quick_Sort(a,pivot+1,h);
    }
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Quick_Sort(a,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}