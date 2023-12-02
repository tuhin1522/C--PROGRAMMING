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
        vector<int>even,odd;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2 != 0){
                odd.push_back(i);
            }
            else{
                even.push_back(i);
            }
        }
        if(odd.size()>=3){
            cout<<"YES"<<endl;
            cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
        }
        else if(even.size()>=2 && odd.size()>=1){
            cout<<"YES"<<endl;
            cout<<even[0]<<" "<<even[1]<<" "<<odd[0]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    } 
}