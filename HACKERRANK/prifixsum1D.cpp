#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }

    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<" "<<endl;
    }
}

/*
input
6
3 6 2 8 9 2
4
2 3
4 6
1 5
5 6
output
8
19
28
11
*/