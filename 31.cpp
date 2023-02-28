// Next Permutation
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        bool changed=false;
        while(i>=0 && nums[i+1]<=nums[i]){
            i--;
        }
        if(i>=0){
            int j=nums.size()-1;
            while(nums[j]<=nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
        return;
    }
};

// [1,2,3,4]
//      i j
// [1,2,4,3]

// [1, 3, 2]
//     i  j
// [1,{2,3,4}]
// [1,{2,{3,4}}]
// [1,{2,{4,3}}]
// 1 , 2, 4,3 