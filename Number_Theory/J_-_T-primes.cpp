#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

const int MAX_N = 1000001;
bool prime[MAX_N];

void countDivisor()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX_N; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX_N; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX_N; j+=2*i)
                prime[j] = true;
}

int main (void)
{
    countDivisor();

    int t;
    ll n,x;

    scanf("%d",&t);

    while (t--)
    {
        scanf("%lld",&n);

        x = sqrt(n);

        if (prime[x]==false && x*x == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}