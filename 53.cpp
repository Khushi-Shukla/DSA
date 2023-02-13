// Maximum Subarray
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0, mxsum=INT_MIN;
     for(int i=0;i<nums.size();i++){
         cursum+=nums[i];
         if(mxsum<cursum)
             mxsum=cursum;
         if(cursum<0)
             cursum=0;
     }
        return mxsum;
    }
};