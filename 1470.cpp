// Shuffle the Array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int j=0;
        for(int i=0;i<n;i+=2){
            ans[i]=nums[j++];
            ans[i+1]=nums[n++];
        }
        return ans;
    }
};