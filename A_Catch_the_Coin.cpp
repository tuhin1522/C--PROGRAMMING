#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool can_collect_coin(int x, int y) {
    int d = max(abs(x),abs(y));
    return d<=y;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> coins(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }
    
    for (int i = 0; i < n; ++i) {
      int x = coins[i].first;
      int y = coins[i].second;
        if (can_collect_coin(x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
