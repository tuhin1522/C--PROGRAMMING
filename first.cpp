#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,n,a,b,c,d,x,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll cnt=1,ck=0;
        char c=s[0],p=s[s.size()];
        cout<<p<<endl;
        for(a=0;a<s.size();a++){
            if(s[a]!=c){
                c= 1-c+'0'+'0';
                cout<<c<<endl;
                cnt++;
            }
            if(s[a]==p)
                cnt++;
            if(a<s.size()-1&&s[a]=='0'&&s[a+1]=='1')
                ck=1;
        }
        if(ck)
            cnt--;
        cout<<cnt<<endl;
    }
}
