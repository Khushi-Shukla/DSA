#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto a:arr){
            mp[a]++;
        }
        vector<int> v;
        for(auto a:mp){
            if(find(v.begin(), v.end(), a.second)!=v.end())
                return false;
            v.push_back(a.second);
        }
        return true;
    }
};

int main(){
    vector<int> v={1,2,2,1,1,3};
    Solution s;
    cout<<s.uniqueOccurrences(v);
}