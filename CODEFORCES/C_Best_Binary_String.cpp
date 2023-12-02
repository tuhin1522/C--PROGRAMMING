#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(count(s.begin(),s.end(),'?')==0){
            cout<<s<<endl;
            continue;
        }
        char z='?';
        queue<int>q;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='?'){
                q.push(i);
                continue;
            }
            z=s[i];
            while(q.empty()==0){
                s[q.front()]=s[i];
                q.pop();
            }
        }
        char a='0';
        if(z=='1'){
            a='1';
        }
        while(q.empty()==0){
            s[q.front()]=a;
            q.pop();
        }
        cout<<s<<endl;
        
    }
}