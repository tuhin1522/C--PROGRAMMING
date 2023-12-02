#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool allSame(vector<int> arr) {
    int firstElement = arr[0];
    for (int num : arr) {
        if (num != firstElement) {
            return false;
        }
    }
    return true;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int>b,c;
        if(allSame(a)){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                if(a[i]==a[i+1]){
                    b.push_back(a[i]);
                }
                else{
                    b.push_back(a[i]);
                    break;
                }
            }
            for(int j=b.size();j<n;j++){
                c.push_back(a[j]);
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            //cout<<1<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}
