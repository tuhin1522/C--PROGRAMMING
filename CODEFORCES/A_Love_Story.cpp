#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str = "codeforces";
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i] != s[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}