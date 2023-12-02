#include <bits/stdc++.h>
using namespace std;
void value(string str)
{
    int cnt=0;
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
    
    for(auto it: count){
        if(it.second==3){
            cout<<"6"<<endl;
        }
        if(it.second==2 ){
            cnt++;

        }
    }
    if(2==cnt){
        cout<<"4"<<endl;
    }
    if(count.size()==1){
        cout<<"-1"<<endl;
    }
    else if(count.size()==3 || count.size()==4)
    {
        cout<<"4"<<endl;
    }
}

  int main()
 {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        value(str);
    }
   
   return 0;
}
//for(auto &cv : s) cnt[cv - '0']++,mx = max(mx, cnt[cv - '0']);