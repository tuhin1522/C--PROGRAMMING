#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n%2 == 0 ){
            int a[n+1];
            for(int i=1;i<=n;i++){
                a[i]=i;
                if(i%2==0){
                    swap(a[i],a[i-1]);
                }
            }
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==1) cout<<1<<endl;
        else{
            cout<<-1<<endl;
        }
    }

}