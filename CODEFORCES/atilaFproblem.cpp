#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int max = int(s[0]);
        for(int i=1;i<n;i++)
        {
            if(max<s[i]){
                max = s[i];
            }
        }
        cout<<max-96<<endl;
    }
}
