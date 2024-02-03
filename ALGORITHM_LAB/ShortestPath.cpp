#include<bits/stdc++.h>
using namespace std;

const int sz = 4;

void shortestpath(int cost[][sz], int dist[], int n, int v) {
    bool S[sz];
    for (int i = 0; i < n; i++) {
        S[i] = false; dist[i] = cost[v][i];
    }
    S[v] = true;
    dist[v] = 0;
    for (int num = 2; num <= n; num++) {
        // int u = 0;
        // S[u] = true;
        int mn=INT_MAX;
        int u=0;
        for(int i=0;i<n;i++){
            if(S[i] != true && dist[i]<mn){
                u=i;
                mn=dist[i];
            }
        }
        S[u]=true;
        for (int w = 0; w < n; w++) {
            if (dist[w] > dist[u] + cost[u][w]) {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << dist[i] << " ";
    }
    cout<<endl;
}

const int inf = 9999999;

int main() {
    int n = 4;
    int v = 0;
    int cost[][sz] = {
        {0, 2, 1, 6},
        {2, 0, inf, 3},
        {1, inf, 0, 4},
        {inf, 3, inf, 0}};
    int dist[sz];

    shortestpath(cost, dist, n, v);
    
    return 0;
}
