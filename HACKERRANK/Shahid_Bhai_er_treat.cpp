#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main() {
	int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        float a = pi*x*x;
        float b = pi*y*y;
        if((2*b)>=a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
