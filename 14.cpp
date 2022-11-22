// Longest Common Prefix
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int i=0,k=0;
        string str="";
        
        sort(strs.begin(), strs.end());
        k=min(strs[0].size(), strs[n-1].size());
        string s1=strs[0], s2=strs[n-1];
        
        while(i<k && s1[i]==s2[i])
            i++;
        
        str=s1.substr(0,i);
        
        return str;
    }
};
int main(){
    vector<string> strs = {"flower","flow","flight"};
    Solution s;
    cout<<s.longestCommonPrefix(strs);
}