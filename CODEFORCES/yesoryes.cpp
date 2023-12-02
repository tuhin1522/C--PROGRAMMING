#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> currency(n + 1, 0);

        while (q--) {
            int l, r, x;
            cin >> l >> r >> x;

            currency[l] += x;
            if (r + 1 <= n)
                currency[r + 1] -= x;
        }

        for (int i = 2; i <= n; i++) {
            currency[i] += currency[i - 1];
        }

        for (int i = 1; i <= n; i++) {
            cout << currency[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
