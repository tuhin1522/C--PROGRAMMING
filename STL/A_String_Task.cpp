#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

string remVowel(string str) 
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u','y'}; 
    for (int i = 0; i < str.length(); i++) 
    {
        if (find(vowels.begin(), vowels.end(),str[i]) != vowels.end()) 
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}

int main()
{
    optimize();
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string x = remVowel(s);
    for(int i=0;i<x.size();i++) 
    {
        cout<<"."<<x[i];
    }
    cout<<endl;
}