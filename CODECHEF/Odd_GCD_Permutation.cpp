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
        if(n%2==0){
            for(int i=n;i>=1;i--){
                if(i==1){
                    cout<<i<<" ";
                }else{
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
        
        else{
            cout<<-1<<endl;
        }
    }
    

}