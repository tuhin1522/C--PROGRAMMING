#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        string a,b;
        
        for(int i=0;i<n/2;i++)
        {
            a = a + s[i];       
        }
        for(int i=n/2;i<n;i++)
        {
            b = b + s[i];   
        }
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}
