//House Robber

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return  max(nums[0], nums[1]);
        int twoStepPrev=nums[0];
        int oneStepPrev=max(nums[0], nums[1]);
        int curr=0, ans=0;
        for(int i=2;i<n;i++){
            curr=nums[i]+twoStepPrev;
            twoStepPrev=oneStepPrev;
            ans=max(ans, max(curr, oneStepPrev));
            oneStepPrev=ans;
        }
        return ans;
    }
};