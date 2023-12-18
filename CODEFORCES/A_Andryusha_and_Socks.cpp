#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int x = 2 * n;
    set<int> a;
    size_t ans = 0;
    for (int i = 0; i < x; i++)
    {
        int num;
        cin >> num;
        if (a.insert(num).second == false)
        {
            a.erase(num);
        }
        ans = max(ans, a.size());
    }

    cout << ans << endl;
}
int32_t main()
{
    solve();

    return 0;
}
