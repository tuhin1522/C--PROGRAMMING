#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n-1),v1(n);
		for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
        }
        v1[0]=v[0]+1;
        for(int i=0;i<n-1;i++)
        {
            if(v1[i]<=v[i])
            {
                int q;
                if((v[i]%v1[i-1])!=0)
                    q=(v[i]/v1[i-1])+1;
                else
                    q=(v[i]/v1[i-1]);
                v1[i]=(v1[i-1]*q)+v[i-1];
                v1[i+1]=v[i];
            }
            else
            {
                v1[i+1]=v1[i]+v[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
	}
}
