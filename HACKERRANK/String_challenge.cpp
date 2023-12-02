#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int consonantCount(string str) 
{
    vector<char> vowels = {'b', 'c', 'd', 'f', 'g','h', 'j', 'k', 'l', 'p','q','r','s','t','w','x','y','z'};
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
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<consonantCount(s)<<endl;
}