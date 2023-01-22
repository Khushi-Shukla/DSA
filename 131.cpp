// Palindrome Partitioning
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void palindromePartition(vector<vector<string>>& ans, vector<string>& temp, int idx, string s){
        if(idx==s.size()){
            ans.push_back(temp);
            // temp.clear();
            return;
        }

        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s, idx, i)){
                temp.push_back(s.substr(idx, i-idx+1));
                palindromePartition(ans, temp, i+1, s);
                temp.pop_back();
            }

        }
            
    }

    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        palindromePartition(ans, temp, 0, s);
        return ans;
    }
};