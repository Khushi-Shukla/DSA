// Set Mismatch
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int, int> mp;
        vector<int> ans;
        int i;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int t=0;
        for(i=1;i<=mp.size();i++){
            if(mp[i]==2)
                ans.push_back(i);
            if(mp[i]==0){
                t=i;
            }
        }
        if(t==0)
            t=i;
        ans.push_back(t);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> v={1,2,2,4};
    vector<int> ans=s.findErrorNums(v);
    for(auto a:ans){
        cout<<a<<" ";
    }
    cout<<endl;
}