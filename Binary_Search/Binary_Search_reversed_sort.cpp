#include <bits/stdc++.h>
using namespace std;

void search(int a[],int n,int x){
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x){
            cout<<mid<<endl;
            return;
        }
        else if(a[mid]>x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<"Not found.";
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,a+n);
    int x; cin>>x;
    search(a,n,x);
}
