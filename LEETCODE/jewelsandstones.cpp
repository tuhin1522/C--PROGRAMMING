#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1;
        cin>>s1;
        set<char>s2;
        for(int i=0;i<s.size();i++)
        {
            s2.insert(s[i]);
        }
        int count=0;
        for(int i=0;i<s1.size();i++){
            if(s2.find(s1[i]) != s2.end()){
                count++;
            }
        }
        cout<<count<<endl;
    }
}