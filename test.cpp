#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define endl '\n'
#define pb push_back
#define int long long
#define intd long double
#define uint unsigned long long
#define size(x) (int) x.size()
#define aint(x) (x).begin(), (x).end()

typedef vector<int> vi;
typedef vector<int> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<int, int> pint;
typedef vector<pii> vii;
typedef vector<pint> vint;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define debugin(x) cerr << #x <<" "; _print(x); cerr << "; ";
#else
#define debug(x)
#define debugin(x)
#endif

void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}void _print(char t) {cerr << t;}
void _print(intd t) {cerr << t;}void _print(double t) {cerr << t;}void _print(uint t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//--------------------------- Combinator -------------------------//
int BinaryExponential(int x,int y){
    int res=1;
    while(y){
        if(y&1){
            res=(res*x)%mod;
        }
        y>>=1;
        x=(x*x)%mod;
    }
    return res;
}

int F[N+2];
void PreCalFacts(){
	int res=1;
	for(int i=1;i<=N;i++){
		res*=i;
		res%=mod;
		F[i]=res;
	}
}

int nCr(int n,int r){
	if(r>=n)return 0LL;
	int x=F[n];
	int y=(F[r]%mod*F[n-r]%mod)%mod;
	y = BinaryExponential(y,mod-2);
	int ans=(x%mod * y%mod)%mod;
	return ans;
}

int nPr(int n,int r){
	if(r>=n)return 0LL;
	int x=F[n];
	int y=(F[n-r]%mod)%mod;
	y = BinaryExponential(y,mod-2);
	int ans=(x%mod * y%mod)%mod;
	return ans;
    // int main(){
	// PreCalFacts();
	// while(t--){
	// 	cout<<nCr(n,r)<<endl;
	// }
}

//----------Find the pair whose sum is equal to x -------//
bool PairSumEqualtoX(int a[],int x,int n){
	int val1,val2;
	int i=0;
	int j=n-1;
	while(i<j){
		int sum = a[i]+a[j];
		if(sum==x){
			val1 = a[i];
			val2 = a[j];
			return true;
		}
		if(sum>x) j--;
		else i++;
	}
	return false;
}

//----------Find the pair in Array Whose sum is closest to X ------//

void PairClosestSumEqualtoX(int ar[],int n, int x)
{
    int l=0;
    int r=n-1;
    int ind1,ind2;
    int dif=INT_MAX;
    while(l<r)
    {
        int sum=ar[l]+ar[r];
        if(abs(sum-x)<dif)
        {
            ind1=l;
            ind2=r;
            dif=abs(sum-x);
        }
        if(sum>x)r--;
        else l++;
    }
    cout<<"("<<ar[ind1]<<" "<<ar[ind2]<<")  = "<< ar[ind1]+ar[ind2]<<endl;
}

//---------Find the closest pair from two sorted arrays -------//
void printClosest(int ar1[], int ar2[], int m, int n, int x) //n=!st array size, m=2nd array size
{
    int diff = INT_MAX;
    int res_l, res_r;
    int l = 0, r = m-1;
    while (l<n && r>=0)
    {
       if (abs(ar1[l] + ar2[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(ar1[l] + ar2[r] - x);
       }
       if (ar1[l] + ar2[r] > x)
           r--;
       else 
           l++;
    }
    cout << "The closest pair is [" << ar1[res_l] << ", "
         << ar2[res_r] << "] \n";
}

//------------Find all triplets with zero sum---------//
void FindTripletSum(int a[], int n)
{
	sort(a,a+n);
	for(int i=0;i<n;i++)
    {
        unordered_set<int>s;
        for(int j=i+1;j<n;j++)
        {
            int x = -(a[i]+a[j]);
            if(s.find(x)!=s.end())
            {
                cout<<"("<<x<<","<<a[i]<<","<<a[j]<<")"<<endl;
            }
            else{
                s.insert(a[j]);
            }
        }
    }
}

void solve()
{

}
int32_t main()
{
    Faster;
    int t; 
    cin>>t; 
    while(t--) solve();

    return 0;
}
