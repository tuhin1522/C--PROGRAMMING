#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int solve(int x){
    int count1=0,i;
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            while(x%i==0){
                x/=i;
            }
            count1++;
        }
    }
    if(x>1){
        count1++;
    }
    return count1;
}
 
int main(){
     int n;
     cin>>n;
     int count=0;
     for(int i=2;i<=n;i++){
            if(solve(i)==2){
                count++;
            }
     }
     cout<<count<<endl;
}