#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    string s;
    cin >> n>>s;
    int count=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == '0') count++;
    }
    count = count*2;
    int x = (int)abs(n-count);
    cout <<x<< endl;
}