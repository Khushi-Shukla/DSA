// Jump Game II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int i;
        int n=nums.size();
        int count=0, curr=-1, next=0;
        for(i=0;next<n-1;i++){
            if(i>curr){
                count++;
                curr=next;
            }
            next=max(next, nums[i]+i);
            
        }
        return count;
    }
};