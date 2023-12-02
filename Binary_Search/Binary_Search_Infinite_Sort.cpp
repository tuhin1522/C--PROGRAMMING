#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int a[],int key,int low,int high)
{
    while((high-low)>1)
    {
        int mid = (low+high)/2;
        if(a[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    if(a[low] == key){
        return low;
    }
    else if(a[high] == key){
        return high;
    }
}


int SearchInfinite(int a[],int key)
{
    int low = 0;
    int high = 1;
    while(a[high]<key){
        low = high;
        high = 2*high;
    }
    return Binary_Search(a,key,low,high);
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<SearchInfinite(a,key)<<endl;

}