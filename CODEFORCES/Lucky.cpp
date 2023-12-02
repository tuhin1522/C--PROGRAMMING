#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int sum=0,sum1=0;
        for(int i=0;i<s.size()-3;i++){
            sum = sum + s[i];
        }
        for(int i=s.size()-3;i<s.size();i++){
            sum1 = sum1 + s[i];
        }
        if(sum==sum1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    } 
}