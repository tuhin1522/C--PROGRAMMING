#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int sum=0,sum1=0;
        for(int i=1;i<=n;i++){
            if(i%2==1)
                sum += a[i];
            else{
                sum1 += a[i];
            }
        }
        if(((sum%2==1)&&(sum1%2==1))||((sum%2==0)&&(sum1%2==0))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}