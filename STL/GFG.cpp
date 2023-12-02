#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n,k;cin>>n>>k;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        nums.push_back(x);
    }

    vector<pair<int,int>>v;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){

            if(i!=j && (nums[i]-nums[j])==k) v.push_back({nums[i],nums[j]});

        }
    }
    int s = unique(v.begin(),v.end())-v.begin();
    cout<<s<<endl;
    
}