#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    priority_queue<int>q;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
        if(q.size()>=3){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            int c = q.top();
            q.pop();
            long long multiple = 1LL*a*b*c;
            cout<<multiple<<endl;
            q.push(a);
            q.push(b);
            q.push(c);
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}