//3Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j,k;
        sort(nums.begin(), nums.end());

        vector<vector<int>> a;
      
        int n=nums.size();
        for(i=0;i<n;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> ab={nums[i],nums[j],nums[k]};
                    if(find(a.begin(), a.end(), ab)==a.end())
                        a.push_back(ab);
                     
                    while(j<k && nums[j]==nums[j+1] )
                        j++;
                    while(k>j && nums[k]==nums[k-1])
                        k--;
                    j++;
                    k--;
                }
                else if(sum>0)
                    k--;
                else if(sum<0)
                    j++;
            }
        }
        return a;
    }
};