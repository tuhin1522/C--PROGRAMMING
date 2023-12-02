#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool prime[90000001];

vector<int>v;
void Solve()
{
    int number=90000000;
    prime[0]=prime[1]=true;
    for(int i=2;i*i<=number;i++){
        if(prime[i]==false){
            for(int j=i*i;j<=number;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2;i<=number;i++){
        if(prime[i]==false){
            v.push_back(i);
        }
    }
}

int main()
{
    Solve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        cout<<v[n-1]<<endl;
    }
}