#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define ll long long int
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector<ll> findTriplets(vector<ll>& nums, int n){
    vector<ll> result;
    int size = nums.size();
    for (ll i = 0; i < size - 2; i++) {
        ll left = i + 1;
        ll right = size - 1;
        while (left < right) {
            ll tripletProduct = nums[i] * nums[left] * nums[right];
            if (tripletProduct == n) {
                result.push_back(nums[i]);
                result.push_back(nums[left]);
                result.push_back(nums[right]);
                return result;
            } else if (tripletProduct < n) {
                left++;
            } else {
                right--;
            }
        }
    }
    return result;
}

int main() {
    Faster;
    int t; 
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        vl a;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                a.push_back(i);
                if(n/i != i){
                    a.push_back(n/i);
                }
            }
        }
        sort(a.begin(),a.end());

        vector<ll> triplet = findTriplets(a, n);

        if (triplet.size() == 3) {
            cout<<"YES"<<endl;
            cout <<triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
        } else {
            cout << "NO" <<endl;
        }
        
    }
	return 0;
}
