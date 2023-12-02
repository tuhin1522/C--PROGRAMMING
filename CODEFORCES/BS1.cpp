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
        string s;
        cin>>s;
        ll count1=0,count0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if(count1>count0){
            cout<<count0<<endl;
        }
        else if(count1<count0){
            cout<<count1<<endl;
        }
        else{
            cout<<count1-1<<endl;
        }
    }
}