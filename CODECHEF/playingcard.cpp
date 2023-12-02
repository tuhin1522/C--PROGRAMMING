#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        if(s[1] == 'H' || s[1] == 'D' || s[1] == 'C' || s[1] == 'S')
        {
            if(s[2] == 'A' || s[2] == 2 || s[2] == 3 || s[2] == 4 || s[2] == 5 || s[2] == 6 || s[2] == 7 || s[2] == 8 || s[2] == 9 || s[2] == 'T' || s[2] == 'J' || s[2] == 'Q' || s[2] == 'K')
            {
                count++;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    if(count==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}