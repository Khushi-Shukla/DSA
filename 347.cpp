// Top K Frequent Elements
#include<bits/stdc++.h>
using namespace std;
class Solution {
        static bool compare(const pair<int, int> a, const pair<int, int> b){
            return a.second>b.second;
        }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int,int>> v;
        for(auto a: nums){
            mp[a]++;
        }
        for(auto a: mp){
            v.push_back({a.first, a.second});
        }
        sort(v.begin(), v.end(), compare);
        vector<int> ans;
        int i=0;
        while(k-->0){
            ans.push_back(v[i].first);
            i++;
        }
        return ans;
    }
};