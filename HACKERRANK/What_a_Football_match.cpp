#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==1){
            cout<<"Unmarried-"<<(char)(96+y)<<endl;
        }
        else if(x==2){
            cout<<"Married-"<<(char)(64+y)<<endl;
        }
    }
}