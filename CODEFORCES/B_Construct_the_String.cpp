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
        int l,a,b;
        cin>>l>>a>>b;
        string s;
        char ch='a';
        int count=0;
        for(int i=0;i<l;i++){
            s.push_back(ch);
            ch++;
            count++;
            if(count==b){
                ch='a';
                count=0;
            }
            if(ch>'z'){
                ch='a';
            }
        }
        cout<<s<<endl;
    }
}
    