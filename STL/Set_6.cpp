#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        set<int>s;
        int a;cin>>a;
        while(a--){
            char ch; cin>>ch;
            if(ch=='a'){
                int x; cin>>x;
                s.insert(x);
            }
            if(ch=='b'){
                for(auto u:s){
                    cout<<u<<" ";
                }

            }
            if(ch=='c'){
                int x;cin>>x;
                s.erase(x);
            }
            if(ch=='d'){
                int x;cin>>x;
                if(s.count(x)){
                    cout<<"1"<<" ";
                }
                else{
                    cout<<"-1"<<" ";
                }
            }
            if(ch=='e'){
                cout<<s.size()<<" ";
            }
        }
        cout<<endl;

        
    }
}