#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        
        if(s[i]=='G'){
            cout<<"G";
        }
        else if(s[i]=='(' && s[i+1]==')'){
            cout<<"o";
            i++;
        }
        else{
            if(s[i]=='('){
                if(s[i+1]=='a'){
                    cout<<"a";
                    if(s[i+2]=='l'){
                        cout<<"l";
                    }
                }
            }
        } 
    }
}