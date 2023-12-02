#include<bits/stdc++.h>
using namespace std;

double multiply(double mid, int n)
{
    double ans = 1;
    for(int i=0;i<n;i++){
        ans *= mid;
    }
    return ans;
}

double eps = 1e-6;
int main()
{
    double x;
    int n;
    cin>>x>>n; 
    double low=1,high=x,mid;
    while(high-low>eps){
        mid = (high+low)/2;
        if(multiply(mid,n) < x){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    cout<<high<<endl;
}