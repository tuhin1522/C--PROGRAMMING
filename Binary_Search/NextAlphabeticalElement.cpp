#include <bits/stdc++.h>
using namespace std;

char solve(string s,char ch,int n){
    int low = 0;
    int high = n-1;
    char ans;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(s[mid]>ch){
            ans = s[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    char ans = solve(s,ch,s.size());
    cout<<ans<<endl;
}
