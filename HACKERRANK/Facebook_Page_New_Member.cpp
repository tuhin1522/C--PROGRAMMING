#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>=y && y>0){
            int a = 1000/y;
            if(1000>a*y){
                cout<<a+1<<endl;
            }
            else cout<<a<<endl;
        }
        else if(x<y){
            int b = y-x;
            int c = 2*b +x;
            int d = 1000/c;
            if(1000>d*c){
                cout<<d+1<<endl;
            }
            else cout<<d<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}