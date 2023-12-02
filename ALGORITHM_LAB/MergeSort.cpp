#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int h=low;
    int b[101];

    while (h<=mid && j<=high) {
        if (a[h]<=a[j]) {
            b[i]=a[h];
            h++;
        }
        else {
            b[i]=a[j];
            j++;
        }
        i++;
    }

    if (h>mid) {
        for (int k=j;k<=high;k++) {
            b[i]=a[k];
            i++;
        }
    }
    else {
        for (int k=h;k<=mid;k++) {
            b[i]=a[k];
            i++;
        }
    }

    for (int k=low;k<=high;k++) {
        a[k]=b[k];
    }
}

void Merge_Sort(int a[],int l,int r)
{
    if (l<r) {
        int mid=l+(r-l)/2;
        Merge_Sort(a,l,mid);
        Merge_Sort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    Merge_Sort(a,0,n-1);

    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
