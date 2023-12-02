#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    string s;
    cin>>s;
    char ch,ch1;
    int upper_sum=0,lower_sum=0,count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' and s[i]<='z'){
            ch = toupper(s[i]);
            upper_sum = upper_sum + (int)ch;
        }
        else if(s[i]>='A' and s[i]<='Z'){
            ch1 = tolower(s[i]);
            lower_sum = lower_sum + (int)ch1;
        }
    }
    int value = abs(upper_sum - lower_sum);
    for(int i=2;i<value/2;i++){
        if(value%i==0){
            count++;
            break;
        }
    }
    
    if(count==1){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    
}
