#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s)
{
    int low=0;
    int high = s.length()-1;
    while(low<high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
void printpalindromicsubstr(string str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=1;i+j<=str.length();j++)
        {
            string s = str.substr(i,str.length());
            if(ispalindrome(s))
            {
                cout<<s<<endl;
                break;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string s1,s2;
        cin>>n>>m>>s1>>s2;
        string concat = s1 + s2;
        printpalindromicsubstr(concat);
    }
}