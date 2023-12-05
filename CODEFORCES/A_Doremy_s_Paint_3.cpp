#include<iostream>
#include<cstring>
#define endl '\n'
using namespace std;
const int MAXN=1e5+5;
int a[MAXN],n,cnt[MAXN],vis[MAXN];
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int num=0;
        cin>>n;
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
            if(cnt[a[i]]==1) num++,vis[num]=a[i];
        }
        if(num>=3)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(num==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(num==2)
        {
            int num1=cnt[vis[1]];
            int num2=cnt[vis[2]];
            if(num1-num2==1 || num1-num2==-1 || num1==num2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}