#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int digit_sum(int n){
  if(n==0) return 0;
  return digit_sum(n/10)+(n%10);
}

int G(int n) {
    while (n > 9) {
        n = digit_sum(n);
    }

    return n;
}

int main() {
    int n;
    while(1){
      
      cin>>n;
      if(n==0) break;
      int ans = G(n);
      cout<<ans<<endl;
    }
}
    