#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string temp;
    cin>>s;
    string s1;
    cin>>s1;
    cout<<s.size()<<" "<<s1.size()<<endl;
    string s3 = s + s1;
    cout<<s3<<endl;
    temp[0] = s[0];
    s[0] = s1[0];
    s1[0] = temp[0];
    cout<<s<<" "<<s1<<endl;
}