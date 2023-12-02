#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int larg1 = a[0];
        int larg2 = a[1];
        if(larg1<larg2){
            int temp = larg1;
            larg1 = larg2;
            larg2 = temp;
        }
        for(int i=2;i<n;i++)
        {
            if(a[i]>=larg1)
            {
                larg2 = larg1;
                larg1 = a[i];
            }
            else if(a[i]>=larg2){
                larg2 = a[i];
            }
        }
        for(int i=0;i<n;i++){
            int b = a[i] - larg1;
            if(a[i]==larg1)
            {
                b = larg1 - larg2;

            }
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
