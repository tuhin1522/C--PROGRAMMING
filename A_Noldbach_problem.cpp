#include <bits/stdc++.h>
#define maxn 10002
using namespace std;
#define ll long long int
vector < ll > primes;
bool vis[maxn+10];
set < ll > st;

void sieve()
{
    vis[0] = 1;
    vis[1] = 1;
    for(ll i = 4; i <= maxn; i += 2){
        vis[i] = 1;
    }
    for(ll i = 3; i * i <= maxn; i += 2){
        if(vis[i] == 0)
        for(ll j = i * i; j <= maxn; j += i){
            vis[j] = 1;
        }
    }
    for(ll i = 2; i <= maxn; i++)
    {
        if(vis[i] == false)
        {
            primes.push_back(i);
            st.insert(i);
        }
    }
}

int main()
{
    ll i, j, k, l, m, n, o, x;
    ll testcase;
    ll input, flag, tag, ans;
    sieve();
    cin >> n >> k;
    ans = 0;
    for(i = 1; primes[i] <= n; i++)
    {
        flag = primes[i];
        flag--;
        for(j = 1; j <= i; j++)
        {
            if(primes[j] + primes[j - 1] == flag)
            {
                ans++;
                break;
            }
        }
    }
    if(ans >= k){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}