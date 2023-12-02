#include <bits/stdc++.h>
using namespace std;

int w[10];
double x[10];


void Knapsack(int m, int n) {
    
    for (int i=0;i<n;i++) {
        x[i]=0.0;
    }
    int u=m;
    int i;
    for (i=0;i<n;i++) {
        if (w[i]>u)
            break;
        x[i]=1.0;
        u=u-w[i];
    }
    if (i<=n) {
        x[i]=(float)u/w[i];
    }
}

int main() {
    int n,m;
    cin >> n;
    cin >> m;
    for (int i=0;i<n;i++) {
        cin >> w[i];
    }
    sort(w,w+n);
    Knapsack(m,n);
    for (int i=0;i<n;i++) {
        cout<<x[i]<<" ";
    }

    return 0;
}
