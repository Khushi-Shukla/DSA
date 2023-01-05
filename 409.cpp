// Longest Palindrome
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(), s.end());
        stack<char> st;
        int count=0;
        int n=s.length();
        if(n==1)
            return 1;
        if(n==2){
            if(s[0]==s[1])
                return 2;
            else return 1;
        }
        for(int i=0;i<s.length();i++){
            if(st.empty())
                st.push(s[i]);
            else if(st.top()==s[i]){
                st.pop();
                count++;
            }
            else st.push(s[i]);
        }
        return st.empty()?2*count: 2*count+1;
    }
};