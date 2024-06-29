#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      cout<<n<<endl;
        set<int> s(nums.begin(), nums.end());
        //nums.assign(s.begin(), s.end());
        int x = s.size();//ans k
        vector<char>v;
        for(int i=0;i<x;i++){
          v.push_back(s[i]);
        }
        for(int i=x;i<n;i++){
          v.push_back('_');
        }
        for(int i=0;i<n;i++){
          nums.push_back(v[i]);
        }
        return x;
    }
};

int main() {
    vector<int> nums = {1, 1, 2};
    Solution sol;
    int new_length = sol.removeDuplicates(nums);

    cout << "New length: " << new_length << endl;
    cout << "Array after removing duplicates: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
