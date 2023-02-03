// Generate Parentheses
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void backtrack(int open,int close, int n, vector<string> &ans, string str){
        if(open==close && open==n){
            ans.push_back(str);
            return;
        }
        if(open<n){
            backtrack(open+1, close, n, ans, str+'(');
        }
        if(close<open){
            backtrack(open, close+1, n, ans, str+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=0, close=0;
        vector<string> ans;
        string str="";
        backtrack(open, close, n, ans, str);
        return ans;
    }
};