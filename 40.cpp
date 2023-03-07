// Combination Sum II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rec(vector<int>& candidates, int target, vector<vector<int>>& ans, int n, vector<int>& t, int i){
        if(i==n || target == 0){
            if(target==0){
                // sort(begin(t), end(t));
                ans.push_back(t);
            }
            return;
        }
        for(int j=i;j<n;j++){
            if(candidates[j]>target) return;
            if(j && candidates[j]==candidates[j-1] && j>i) continue;
            t.push_back(candidates[j]);
            rec(candidates, target-candidates[j], ans, n, t, j+1);
            t.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int sum=0, i=0, n=candidates.size();
        vector<vector<int>> ans;
        vector<int> t;
        sort(candidates.begin(), candidates.end());
        rec(candidates, target, ans, n, t, i);
        return ans;
    }
};