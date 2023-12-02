#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]==(i+1)){
            cnt++;
        }
        else{
            break;
        }
    }
    (cnt==n)?cout<<"Yes"<<endl:cout<<"No"<<endl;
}