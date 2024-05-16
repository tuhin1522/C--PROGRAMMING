#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int check=1;
	vector<int>st(n+1);
	for(int i=1;i<=n;i++){
		cin>>st[i];
	}
	if(n==2){
		cout<<"YES"<<endl;
		continue;
	}
	for(int i=1;i<=n-2;i+=2){
		if((st[i]%2)!=(st[i+2]%2)){
			check=0;
		}
	}
	for(int i=2;i<=n-2;i+=2){
		if((st[i]%2)!=(st[i+2]%2)){
			check=0;
		}
	}
	cout<<((check)?"YES":"NO")<<endl;
	}
	return 0;
}