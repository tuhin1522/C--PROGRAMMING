
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(i==0){
                if(s[i]=='1'){
                    count++;
                }
            }
            else{
                if(s[i]=='1'){
                    count++;
                    if(count%2==0){
                        cout<<"-";
                    }
                    else{
                        cout<<"+";
                    }
                }
                else{
                    cout<<"+";
                }
            }
        }
        cout<<endl;
    }
    
}