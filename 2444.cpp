// Count Subarrays With Fixed Bounds
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long int count=0;
        int left=-1, lastmin=-1, lastmax=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=minK && nums[i]<=maxK){
                lastmin=(nums[i]==minK)?i:lastmin;
                lastmax=(nums[i]==maxK)?i:lastmax;
                count+=max(0, min(lastmax, lastmin)-left);

            }
            else{
                left=i;
            }
        }
        return count;
    }
};
