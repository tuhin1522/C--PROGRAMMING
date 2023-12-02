#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int green,purple,sum=0,sum1=0;
        int firstcost,secondcost;
        cin>>green>>purple;
        int people;
        cin>>people;
        int num[people][2];
        for(int i=0;i<people;i++){
            for(int j=0;j<2;j++){
                cin>>num[i][j];
            }
        }
        for(int i=0;i<people;i++){
            if(num[i][0]==1){
                sum++;
            }
            if(num[i][1]==1){
                sum1++;
            }
        }
        firstcost = sum*green + sum1*purple;
        secondcost = sum*purple + sum1*green;
        if(firstcost>secondcost){
            cout<<secondcost<<endl;
        }
        else{
            cout<<firstcost<<endl;
        }
    }
}