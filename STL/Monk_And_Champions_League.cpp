#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    priority_queue<int>q;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    long long sum=0;
    
    for(int i=0;i<m;i++){
        if(!q.empty()){
            int x = q.top();
            q.pop();
            sum = sum + x;
            x--;
        
            if(x>0) q.push(x);
        }
    }
    cout<<sum<<endl;

}