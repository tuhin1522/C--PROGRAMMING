#include<bits/stdc++.h>
using namespace std;
const int N = 7;
//int cost[N][N] = {
 //   {0,0,0,0},
   // {0,0,1,1},
   // {0,0,0,1},
    //{0,0,0,0}
//};
int cost[N][N] = {
    {0,0,0,0,0,0,0},
    {0,0,50,45,10,0,0},
    {0,0,0,10,15,0,0},
    {0,0,0,0,0,30,0},
    {0,20,0,0,0,15,0},
    {0,0,20,35,0,0,0},
    {0,0,0,0,0,3,0}
};
int parent[N];
int dist[N];
int S[N];
int infinity = INT_MAX;

int search_min_dist_vertex(){
    int mn = INT_MAX;
    int v = -1;
    for(int i=0;i<N;i++){
        if(S[i] != 1){
            if(mn>dist[i]){
                mn = dist[i];
                v=i;
            }
        }
    }
    return v;
}

void ShortesPath(int source){
    S[source] = 1;
    dist[source] = 0;
    for(int i=0;i<N;i++){
        int mn_dist_vertex = search_min_dist_vertex();
        if(mn_dist_vertex == -1 ) break;
        S[mn_dist_vertex] = 1;
        for(int j=0;j<N;j++){
            if(cost[mn_dist_vertex][j] != 0){
                if(dist[mn_dist_vertex]!=infinity && S[j] != 1){
                    if(dist[j] > dist[mn_dist_vertex] + cost[mn_dist_vertex][j]){
                        dist[j] = dist[mn_dist_vertex] + cost[mn_dist_vertex][j];
                        parent[j] = mn_dist_vertex;
                    }
                }
            }
        }
    }
}

int main()
{
    cout << "Enter Source Vertex : " ;
    int source; cin >> source;
    for(int i=0;i<N;i++){
        if(cost[source][i] != 0 ){
            dist[i] = cost[source][i];
        }else{
            dist[i] = infinity;
        }
        S[i] = 0;
        parent[i]=-1;
    }
    ShortesPath(source);
    for(int i=0;i<N;i++){
        vector<int>path;
        if(dist[i]!=infinity && i != source){
            int v = i;
            while(v != -1){
                path.push_back(v);
                v = parent[v];
            }
        }
        if(path.size() != 0){
            reverse(path.begin(),path.end());
            cout << 1 << " -> ";
            for(int c=0;c<path.size();c++){
                if(c!=path.size()-1){
                    cout << path[c] << "->";
                }
                else{
                    cout << path[c] << " Cost is : " << dist[i]<<" ( " << i<<" )" << endl;
                }
            }
        }
    }
}
