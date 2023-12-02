#include<bits/stdc++.h>
using namespace std;

const int mx=10;

void shortestpath(int cost[][mx],int dist[],int n,int v) {
    bool S[mx]={false};
    for (int i=0;i<n;i++) {
        dist[i]=cost[v][i];
    }
    S[v]=true;
    dist[v]=0;
    for (int num=2;num<=n;num++){
        int u=0;
        S[u]=true;
        for (int w=0;w<n;w++){
            if (dist[w]>dist[u]+cost[u][w]){
                dist[w]=dist[u]+cost[u][w];
            }
        }
    }
}

int main() {
    int n=3;
    int v=1;
    int cost[][n]={{0,1,22},{1,2,3},{3,2,0}};
    int dist[n];

    shortestpath(cost,dist,n,v);
    for (int i=0;i<n;i++) {
        cout<<dist[i]<<" ";
    }

    return 0;
}
