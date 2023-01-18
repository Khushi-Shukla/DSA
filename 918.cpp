// Maximum Sum Circular Subarray
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n=nums.size(),sum=0,curr=0,kadane=INT_MIN,kadane1=INT_MAX,curr1=0,mx=INT_MIN;
        
        for(int i=0;i<n;i++) {
            mx=max(nums[i],mx);
                      
            curr+=nums[i];
            curr1+=nums[i];
            
            kadane=max(kadane,curr);
            kadane1=min(kadane1,curr1);
            
            curr=max(0,curr);
            curr1=min(0,curr1);
                
            sum+=nums[i];
        }

        if(mx<0)
            return mx;
        return max(kadane,sum-kadane1);
    }
};