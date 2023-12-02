#include <bits/stdc++.h>
using namespace std;

void MaxMin(int a[], int i, int j, int &max, int &min) {
    if (i == j) {
        max = min = a[i];
    } else if (i == j - 1) {
        if (a[i] < a[j]) {
            max = a[j];
            min = a[i];
        } else {
            max = a[i];
            min = a[j];
        }
    } else {
        int mid = (i + j) / 2;
        int max1=max, min1=min;
        MaxMin(a, i, mid, max, min);
        MaxMin(a, mid + 1, j, max1, min1);
        if (max < max1) max = max1;
        if (min > min1) min = min1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max = a[0], min = a[0]; 
        MaxMin(a, 0, n - 1, max, min);
        cout << "Minimum: " << min << endl;
        cout << "Maximum: " << max << endl;
    }
    return 0;
}
