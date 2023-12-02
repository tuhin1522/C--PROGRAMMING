#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int countDivisor(int x){
    int count=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(i!=(x/i)) count += 2; 
            else count++; 
        }
    }
    return count;
 
}

int main()
{
    optimize();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int x = gcd(n,m);
        cout<<countDivisor(x)<<endl;
    }
}
 