#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string str_rev;
    for(int i=s.size()-1;i>=0;i--)
    {
        str_rev.push_back(s[i]);
    }
    if(s==str_rev){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}