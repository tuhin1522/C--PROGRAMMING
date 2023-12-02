#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    vector<string>d = {"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};

    string a,b;
    cin>>a>>b;
    int indx1,indx2;
    for(int i=0;i<7;i++){
        if(d[i]==a){
            indx1 = i;
        }
        if(d[i]==b){
            indx2 = i;
        }
    }
    if((indx1+28)%7==indx2 || (indx1+30)%7==indx2 || (indx1+31)%7==indx2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}