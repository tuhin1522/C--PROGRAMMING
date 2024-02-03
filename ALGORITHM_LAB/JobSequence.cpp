#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define lld long double
#define ull unsigned long long
#define size(x) (int) x.size()
#define all(x) (x).begin(), (x).end() 

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define debugin(x) cerr << #x <<" "; _print(x); cerr << "; ";
#else
#define debug(x)
#define debugin(x)
#endif

void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}void _print(double t) {cerr << t;}void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int AlgorithmJS(vector<int> &d, vector<int> &j, int n) {
    d[0] = j[0] = 0; // Initialize.
    j[1] = 1; // Include job 1.
    int k = 1;
    //debug(j)
    for (int i = 2; i <= n; i++) {
        // Consider jobs in non-increasing order of p[i].
        // Find position for i and check feasibility of insertion.
        //debug(i)
        int r = k; // insert position
        while ((d[j[r]] > d[i]) && (d[j[r]] != r)) {    // if previous jobs deadline is taking up currents jobs deadline position
                                                        // and current jobs f
            //debugin(j[r]) debug(d[j[r]]) debug(d[i])
            r--;
        }
        //debug(r)
        if ((d[j[r]] <= d[i]) && (d[i] > r)) {
            //debugin(d[j[r]]) debug(d[i])
            // Insert i into j[].
            for (int q = k; q >= (r + 1); q--) {
                j[q + 1] = j[q];
            }
            j[r + 1] = i;
            k++;
        }
        //debug(j)
    }
    return k;
}

int main() {
    int n; // Number of jobs
    // cout << "Enter the number of jobs: ";
    cin >> n;

    // int d[n + 1]; // Deadlines
    // int j[n + 1]; // Jobs
    vector<int>d(n+1); // Deadlines
    vector<int>j(n+1); // Deadlines


    // cout << "Enter the deadlines: ";
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }

    // cout << "Enter the jobs in non-increasing order of p[i]: ";
    for (int i = 1; i <= n; i++) {
        cin >> j[i];
    }


    int result = AlgorithmJS(d, j, n);

    cout << "Optimal solution includes " << result << " jobs:" << endl;
    for (int i = 1; i <= result; i++) {
        cout << j[i] << " ";
    }
    cout << endl;

    return 0;
}
