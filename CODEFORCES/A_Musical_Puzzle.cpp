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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string>sx;
        for(int i=0;i<s.size()-1;i++){
            string x = s.substr(i, 2);
            sx.push_back(x);
        }
        sort(sx.begin(), sx.end());
        int x = unique(sx.begin(), sx.end()) - sx.begin();
        cout<<x<<endl;
    }
}