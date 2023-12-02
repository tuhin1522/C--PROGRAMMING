#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--){
        char a[8][8];
        vector<int>v;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
                if (a[i][j] == 'R'){
                    v.push_back(i);
                }
            }
        }
        int count=0;
        for (int i : v) {
	        bool R = true;
	        for (int j = 0; j < 8; j++) {
	            if (a[i][j] != 'R'){
                    R = false;
                    break;
                }
	        }
	        if (R==true){
                count++;
            }
	    }
	    if(count>0){
            cout<<"R"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
}