#include <bits/stdc++.h>
using namespace std;

bool sortbysec(pair<int,int> &a,pair<int,int> &b)
{
	if(a.first != b.first){
		return (a.first <b.first);
	}
    return (a.second > b.second);
}

int main() {
	int t;
	scanf("%d",&t);
	while (t--)
	{
		vector<pair<int, int>>v;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			v.push_back(make_pair(x,y));
			
		}
		sort(v.begin(),v.end(),sortbysec);
		for(int i=0;i<n;i++){
			printf("%d %d\n",v[i].first,v[i].second);
		}
	}
	
}
