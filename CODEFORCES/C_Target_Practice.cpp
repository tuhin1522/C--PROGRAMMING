#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t; 
    cin >> t;
    while(t--) {
        char a[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>a[i][j];
            }
        }
        ll sum=0,sum2=0,sum3=0,sum4=0,sum5=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X'){
                    if(i==0 || j==0 || i==9 || j==9){
                        sum +=1;
                    }
                    else if(i==1 || j==1 || i==8 || j==8){
                        sum +=2;
                    }
                    else if(i==2 || j==2 || i==7 || j==7){
                        sum +=3;
                    }
                    else if(i==3 || j==3 || i==6 || j==6){
                        sum +=4;
                    }
                    else if(i==4 || j==4 || i==5 || j==5){
                        sum +=5;
                    }
                }
                

            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
