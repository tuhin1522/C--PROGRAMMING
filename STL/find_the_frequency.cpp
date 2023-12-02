#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findFrequency(vector<int> v, int x)
{
    map<long long,int>cnt;

    for(auto u: v) cnt[u]++;
    return cnt[x];

}
int main(){
    vector<int>v;
    map<int,int>cnt;
    int n;cin>>n;
    int y;cin>>y;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<findFrequency(v,y)<<endl;
}