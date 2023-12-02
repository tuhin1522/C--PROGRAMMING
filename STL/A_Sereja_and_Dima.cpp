#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int sereja=0,dima=0,flag=1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    while (!v.empty())
    {
        if(flag==1){
            if(*v.begin()>v.back()){
                sereja = sereja + *v.begin();
                v.erase(v.begin());
            }
            else{
                sereja += v.back();
                v.pop_back();
            }
            flag=2;
        }
        else{
            if(*v.begin()>v.back()){
                dima += *v.begin();
                v.erase(v.begin());
            }
            else{
                dima += v.back();
                v.pop_back();
            }
            flag=1;
        }
    }
    cout<<sereja<<" "<<dima<<endl; 
}