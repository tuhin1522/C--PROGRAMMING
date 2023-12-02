#include <bits/stdc++.h>
using namespace std;
const string n = "314159265358979323846264338327";
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(n[i]==s[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
}
