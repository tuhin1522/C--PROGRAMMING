#include <iostream>
using namespace std;
const int n = 3;
// maximum size, m = 20
// (p1, p2, P3) = (25,   24, 15)
// (w1, w2, w3) = (18,   15, 10)
// p[i]/w[i]    = (1.3, 1.6, 1.5)
int w[] = {15, 10, 18}; //ordered such that p[i]/w[i] >= p[i+1]/w[i+1]
double x[n]; // for showing output
void GreedyKnapsack(int m, int n) {
    int i;
    for(i = 0; i < n; i++) x[i] = 0.0;
    int U = m;
    for(i = 0; i < n; i++) {
        if(w[i] > U) break;
        x[i] = 1.0;
        U = U - w[i];
    }
    if(i <= n) x[i] = (float)U/w[i];
}
int main()
{
    int m = 20;
    GreedyKnapsack(m, n);
    for(int i = 0; i < n; i++){
        cout<<"x"<<i+1<<": "<<x[i]<<endl;
    } 
    cout<<endl;
    return 0;
}