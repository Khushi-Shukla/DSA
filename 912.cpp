// Sort an Array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(begin(nums), end(nums));
        return nums;
    }
};