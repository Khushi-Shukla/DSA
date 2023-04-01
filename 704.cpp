// Binary Search
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0, j=n-1;
        int mid;
        while(i<=j){
            if(nums[i]==target)
                return i;
            if(nums[j]==target)
                return j;
            mid=(i+j)/2;
            if(nums[mid]>target)
                j=mid-1;
            else if(nums[mid]<target)
                i=mid+1;
            else if(nums[mid]==target)
                return mid;
        }
        return -1;
    }
};