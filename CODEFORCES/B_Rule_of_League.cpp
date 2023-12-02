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
        int n,x,y;
        cin>>n>>x>>y;
        if((x>0 && y>0) || (x==0 && y==0)){
            cout<<-1<<endl;
            continue;
        }
        if(x==0){
            swap(x,y);
        }
        if((n-1)%x!=0){
            cout<<-1<<endl;
            continue;
        }
        if(x==1){
            cout<<"1 ";
            for(int i=2;i<=n-1;i++){
                cout<<(i+1)<<" ";
            }
            cout<<endl;
            continue;
        }
        ll p1=1,p2=2,w=0;
        for(int i=1;i<=(n-1);i++){
            cout<<p1<<" ";
            w++;
            if(w==x){
                if(i==(n-1)){
                    break;
                }
                cout<<p2+1<<" ";
                p1=p2+1;
                p2=p1+1;
                i++;
                w=1;
                continue;
            }
            p2++;
        }
        cout<<endl;
    }
}