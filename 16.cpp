// 3Sum Closest
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i, j, k;
        sort(nums.begin(), nums.end());
        long long mindiff=LONG_MAX;
        int n=nums.size();
        if(n==3){
            return nums[0]+nums[1]+nums[2];
        }
        for(i=0;i<n;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                long long int sum=nums[i]+nums[j]+nums[k];
                if(mindiff==LONG_MAX || abs(target-sum)<=abs(target-mindiff))
                    mindiff=sum;
                if(sum>=target)
                    k--;
                else if(sum<target)
                    j++;
            }
        }
        return mindiff;
    }
};