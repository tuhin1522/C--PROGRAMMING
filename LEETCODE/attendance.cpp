#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count=0,count1=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'A'){
            count++;
        }
        if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
            count1++;
        }
    }
    if(2>count && count1==0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}