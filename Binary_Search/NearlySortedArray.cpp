#include <bits/stdc++.h>
using namespace std;

int search(int a[],int n,int x){
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x){
            ans = mid;
        }
        else if(low<=mid-1 && a[mid-1]==x){
            ans = mid-1;
        }
        else if(high>=mid+1 && a[mid+1]==x){
            ans = mid+1;
        }
        if(a[mid]>x){
            high = mid - 2;
        }
        else{
            low = mid + 2;
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
    int x; cin>>x;
    cout<<search(a,n,x)<<endl;
}
