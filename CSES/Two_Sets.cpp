#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int n;
    cin>>n;
    int nm = n*(n+1);
    vector<int>a,b;
    int flag=0;
    if(nm%4==0){
        cout<<"YES"<<endl;
        while(n!=0){
            if(flag==0){
                if(n!=0){
                    a.push_back(n);
                    n--;
                } else break;
                if(n!=0){
                    b.push_back(n);
                    n--;
                }else break;
                flag=1;
            }
            else{
                if(n!=0){
                    b.push_back(n);
                    n--;
                }else break;
                if(n!=0){
                    a.push_back(n);
                    n--;
                } else break;
                flag=0;
            }
        }

    }
    else{
        cout<<"NO"<<endl;
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
	return 0;
}
