// Combination Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rec(vector<vector<int>>& ans, vector<int>& a, vector<int> &c, int i, int sum){
        if(sum==0){
            ans.push_back(a);
            return;
        }
        while(i<c.size() && sum-c[i]>=0){
            a.push_back(c[i]);
            rec(ans, a, c, i, sum-c[i]);
             i++;
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> r;
        sort(candidates.begin(),candidates.end()); 
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        rec(ans, r, candidates, 0, target);
        return ans;
    }
};