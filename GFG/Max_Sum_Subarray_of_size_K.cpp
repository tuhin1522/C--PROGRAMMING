//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        
        int temp = 0;
        for (int i = 0; i < k; i++) {
            temp += arr[i];
        }
        int max_sum = temp;
        for(int i=k;i<n;i++){
            max_sum += arr[i] - arr[i-k];
            temp = max(max_sum,temp);
        }
    
        return temp;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
}
