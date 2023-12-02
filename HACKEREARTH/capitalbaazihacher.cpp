#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    string s;
    getline(cin,s);
    char ch;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' and s[i]<='z'){
            ch = toupper(s[i]);
            cout<<ch<<"";
        }
        else if(s[i] == ' '){
            cout<<endl;
        }
    }
    cout<<endl;  
}
