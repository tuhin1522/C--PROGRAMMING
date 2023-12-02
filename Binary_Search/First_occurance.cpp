#include <bits/stdc++.h>
using namespace std;

int last_occurance(int a[],int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x){
            ans = mid;
            low = mid + 1;
        }
        else if(a[mid]<x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int first_occurance(int a[],int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x){
            ans = mid;
            high = mid - 1;
        }
        else if(a[mid]<x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
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
    sort(a,a+n);
    int x; cin>>x;
    cout<<"First occurance : "<<first_occurance(a,n,x)<<endl;
    cout<<"Last occurance : "<<last_occurance(a,n,x)<<endl;
}
