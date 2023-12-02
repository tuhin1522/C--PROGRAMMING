#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin >> A >> B >> C;

        int x = abs(C-B);
        if(A>x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}