#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first){
        return 1;
    }
}


int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        ll sum=k;
        for(int i=0;i<n;i++){
            if(v[i].first<=sum){
                sum += v[i].second;
            }
            else break;

        }
        cout<<sum<<endl;
    }
}
