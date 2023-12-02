#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int main()
  {
    optimize();
	int n;
	cin>>n;
    string str;
    cin>>str;
    int open=0;
    int close=0;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch=='('){
          open++;
        }else{
          close++;
        }
        if (close-open>1){
          cout<<"No"<<endl;
          return 0;
        }
    }
    if(open==close)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
  }