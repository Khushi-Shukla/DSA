// Longest Increasing Subsequence
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n = nums.size();
        int lis[n];
        memset(lis, 0, sizeof(lis));
        int max_1 = INT_MIN;
        for(int i = 0; i < n; i++){
            if(i == 0)
                lis[i] = 1;
            else{
                for(int j = 0; j < i; j++){
                    if(nums[j] < nums[i])
                        lis[i] = max(lis[i], lis[j] + 1);
                    else
                        lis[i] = max(lis[i], 1);    
                }
            }
            max_1 = max(max_1, lis[i]);
        }
        
        //for(int i = 0; i < n; i++)
        //    cout << lis[i] << " ";
        //cout << "\n";
        
        return max_1;
    }
};