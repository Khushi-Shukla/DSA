// Group Anagrams
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string a= strs[i];
            sort(a.begin(), a.end());
            ans[a].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto const& an:ans){
            vector<string> a;
            for(auto const& i: an.second){
                a.push_back(i);
            }
            res.push_back(a);
        }
        return res;
    }
};