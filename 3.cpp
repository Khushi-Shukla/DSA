#include<bits/stdc++.h>
using namespace std;
// Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> chars(128);
        int res=0, right=0, left=0;
        while(right<s.length()){
            char ch=s[right];
            chars[ch]++;
            while(chars[ch]>1){
                char c=s[left];
                chars[c]--;
                left++;
                
            }
            res=max(res, right-left+1);
            right++;
        }
        return res;
    }
};