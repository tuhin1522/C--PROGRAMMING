#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                even.push_back(v[i]);
            }
            else{
                odd.push_back(v[i]);
            }
        }
        int cO=0,cE=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0)continue;
            if(odd.empty() || odd[0]>=v[i]){
                cE++;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]%2!=0)continue;
            if(odd.empty() || odd[0]>=v[i]){
                cO++;
                break;
            }
        }
        if(cE==0 || cO==0){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

    }
}