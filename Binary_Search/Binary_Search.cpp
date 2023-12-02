#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x; cin>>x;
    int low = 0;
    int high = n-1;
    while((high-low)>1)
    {
        int mid = (low+high)/2;
        if(a[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    if(a[low] == x){
        cout<<low<<endl;
    }
    else if(a[high] == x){
        cout<<high<<endl;
    }
    else{
        cout<<"Not found.";
    }
    
}
