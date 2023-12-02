#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int remVowel(string str) 
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count=0;
    for (int i = 0; i < str.length(); i++) 
    {
        if (find(vowels.begin(), vowels.end(),str[i]) != vowels.end()) 
        {
            count++;
        }
    }
    return count;
}

int main()
{
    optimize();
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    
    if(remVowel(s1)==5 && remVowel(s2)==7 && remVowel(s3)==5){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}