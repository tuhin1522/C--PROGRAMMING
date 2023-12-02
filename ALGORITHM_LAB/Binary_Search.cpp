#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int BinarySearch(int a[],int low,int high,int x){
    if(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            return BinarySearch(a,low,mid-1,x);
        }
        else return BinarySearch(a,mid+1,high,x);
    }
    return -1;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x;
        cin>>x;
        int ans = BinarySearch(a,0,n-1,x);

        if (ans != -1) {
            cout<<"Element found at index: "<<ans+1<<endl;
        }
        else {
            cout << "Element not found" << endl;
        }
    }
	return 0;
}
