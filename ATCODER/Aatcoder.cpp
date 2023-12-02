#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] == x)
        {
            cout<<i<<endl;
        }
    }
}