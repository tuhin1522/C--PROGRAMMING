#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<string, pair<string, int>> max_x;

    for (int i = 0; i < n; i++) {
        string st, y;
        int x;
        cin >> st >> x >> y;

        // Check if y already exists in max_x
        if (max_x.find(y) == max_x.end() || x > max_x[y].second) {
            // Update max_x for y if x is greater or y is not present
            max_x[y] = {st, x};
        }
    }

    // Output all unique 'st' values for each 'y'
    for (auto& item : max_x) {
        cout << item.second.first << endl; // Output based on st
    }
}

int main() {
    solve();
    return 0;
}
