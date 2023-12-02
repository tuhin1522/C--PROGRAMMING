#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n,k;
	    cin>>n>>k;
   	    vector<int> a(n);
   	    for(int i=0;i<n;i++){
   		    cin>>a[i];
   	    }
   	    sort(a.begin(),a.end());
   	    int cnt=1,ans=1;
   	    for(int i=1;i<n;i++){
   		    if(a[i]-a[i-1]>k){
   			    ans=max(ans,cnt);
   			    cnt=1;
   		    }else{
   			    cnt++;
   		    }
   	    }
   	    ans=n-max(ans,cnt);
   	    cout<<ans<<endl;
    }
    
}
