#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    auto pr = max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
					return x.second < y.second;
				});

	std::cout << pr->second << endl;
}