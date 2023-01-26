// Word Pattern
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findWords(string s){
        int count=0;
        vector<string> ans;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                ans.push_back(str);
                str="";
            }
            else
                str+=s[i];
        }
        ans.push_back(str);
        return ans;
    }
    bool wordPattern(string pattern, string s) {
        vector<string> word=findWords(s);
        if(word.size()!=pattern.size())
            return false;
        vector<string> pres;
        unordered_map<char, string> mp;
        for(int i=0;i<pattern.size();i++){
            if(mp[pattern[i]]!=""){
                if(mp[pattern[i]]!=word[i])
                    return false;
            }
            else if(find(pres.begin(), pres.end(), word[i])!=pres.end())
                return false;
            else{
                mp[pattern[i]]=word[i];
                pres.push_back(word[i]);
            }
        }
        return true;
    }
};