#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];
long long pf[N][N];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>ar[i][j];
            pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }
    int m;
    cin>>m;
    while(m--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
    }
}

/*
input
3
3 6 2
8 9 2
3 4 1
2 
1 1 2 2 
1 2 3 3
*/

/*
output
26
24
*/