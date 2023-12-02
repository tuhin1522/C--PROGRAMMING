#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int count=0;
        int x[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            if(x[i]==1){
                count++;
            }
        }
        int ans = n -count + count/2;
        if(count%2!=0){
            ans++;
        }
        
        cout<<ans<<endl;
    } 
}