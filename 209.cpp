// Minimum Size Subarray Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=1, minans=INT_MAX;
        int n=nums.size();
        int t=nums[0], k=2;
        while(i<n && j<n){
            if(nums[i]>=target || nums[j]>=target)
                return 1;
            if(t+nums[j]>=target){
                //cout<<nums[i]<<" "<<nums[j]<<endl;
                minans=min(minans, k);
                k=2;
                i++;
                j=i+1;
                t=nums[i];
            }
            else if(t+nums[j]<target){
                t+=nums[j];
                k++;
                j++;
            }
          
           
        }
        if(minans==INT_MAX)
            return 0;
        return minans;
    }
};