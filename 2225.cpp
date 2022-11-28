//Find Players With Zero or One Losses
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> mp;
        for(auto match: matches){
            mp[match[1]]++;
            if(mp[match[0]]<0)
                mp[match[0]]=0;
        }
        vector<vector<int>> ans(2);
        for(auto item:mp){
            if(item.second==0){
                ans[0].push_back(item.first);
            }
            else if(item.second==1){
                ans[1].push_back(item.first);
            }
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> v = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> ans = s.findWinners(v);
    for(auto a:ans){
        for(auto b: a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
}

// Output: [[1,2,10],[4,5,7,8]]