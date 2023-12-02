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
        char a[8][8];
        vector<vector<char>>ans;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(a[i][j]>='a' && a[i][j]<='z'){
                    cout<<(a[i][j]);
                }
            }
        }
        cout<<endl;
    }
}