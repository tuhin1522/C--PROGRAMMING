#include <bits/stdc++.h>
using namespace std;

int search(int a[],int low,int high){

    int ans = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid<high && a[mid+1]<a[mid]){
            ans = mid + 1;
            break;
        }
        else if(mid>low && a[mid]<a[mid-1]){
            ans = mid;
            break;
        }
        if(a[high]>a[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<search(a,0,n-1)<<endl;
}
