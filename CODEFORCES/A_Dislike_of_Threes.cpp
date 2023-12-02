#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t; 
    cin >> t;
    while(t--) {
        int k;
        cin>>k;
        vector<int>a;
        for(int i=1;i<3002;i++){
            if(i%3==0 || i%10==3){
                continue;
            }
            else{
                a.push_back(i);
            }
        }
        cout<<a[k-1]<<endl;
    }
	return 0;
}
