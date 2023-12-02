#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		int sum=0,sum1=0,count=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==1){
				sum++;
			}
			else{
				sum1++;
			}
		}
		if(sum1%2!=0){
			cout<<"-1"<<endl;
		}
		else if(sum1==0){
			cout<<"1"<<endl;
		}
		else{
			for(int i=0;i<n-1;i++){
				if(a[i]==2){
					count++;
				}
				if(count==(sum1/2)){
					cout<<i+1<<endl;
					break;
				}
			}
		}
	}
}
