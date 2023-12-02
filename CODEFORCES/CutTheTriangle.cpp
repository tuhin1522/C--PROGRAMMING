#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int x[6];
        int count=0;
        for(int i=0;i<6;i++)
        {
            cin>>x[i];
            
        }
        if(x[0]==x[2] || x[0]==x[4]||x[4]==x[2]){
            count++;
        }
        if(x[1]==x[3]||x[1]==x[5]||x[3]==x[5]){
            count++;
        }
        if(count>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    } 
}