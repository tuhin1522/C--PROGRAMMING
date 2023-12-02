#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string solve(int n,string s){
    string sp[]={"akash","apon","abubakar","evan","zahid","rafi"};

    for (auto &s:sp){
        int j = 0;
        for (int i=0;i<n;i++){
            if (j==s.length()){
                return "Arigato "+s +" vai";
            }
            if (s[i]==s[j]){
                j++;
            }
        }
        if (j==s.length()){
            return "Arigato "+s +" vai";
        }
    }
    return "TakaDen";
}

int main() 
{
    Faster;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r = solve(n, s);
        cout << r << endl;
    }
    return 0;
}
