#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isBalanced(char ch1,char ch2)
{
    return (ch1=='(' && ch2==')');
}    

int main()
{
    optimize();
    string s;
    cin>>s;
    stack<char>st;
    bool ans = 1;
    for(auto u:s)
    {
        if(u=='('){
            st.push(u);
        }
        else{
            if(st.empty()){
                ans=0;
                break;
            }
            else{
                if(isBalanced(st.top(),u)){
                    st.pop();
                }
                else{
                    ans=0;
                    break;
                }
            }
        }
    }
    if(!st.empty()) ans=0;
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}