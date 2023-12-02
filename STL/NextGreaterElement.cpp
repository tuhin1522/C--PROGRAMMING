#include<bits/stdc++.h>
using namespace std;

vector<int> NG(vector<int>v)
{
    vector<int> ng(v.size());
    stack<int>st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]>v[st.top()]){
            ng[st.top()] =i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ng[st.top()] =-1;
        st.pop();
    }
    return ng;
}

int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ng = NG(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        if(ng[i]==-1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<v[ng[i]]<<endl;
        }
    }
    cout<<endl;
}