#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0,count1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count++;
            }else{
                count1++;
            }
        }
        int mn=min(count,count1);
        if(mn%2 !=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}