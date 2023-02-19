// Largest Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    class Comp{
        public:
        bool operator()(int a, int b){
            string c = to_string(a);
            string d = to_string(b);
            return c+d>d+c;            
        }
    };
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), Comp());
        string ans="";
        int i=0;
        for(auto a:nums){
            ans+=to_string(a);
        }
        return ans[0]=='0'?"0":ans;
    }
};