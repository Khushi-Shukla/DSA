// Decode String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string help(string s, int &i){
        string ans="";
        while(i<s.size() && s[i]!=']') {
            if(!isdigit(s[i])){
                ans+=s[i++];
            }
            else{
                int t=0;
                while(i<s.size() && isdigit(s[i])){
                    t =t*10+ s[i]-'0';
                    i++;
                }
                i++;
                string str = help(s,i);
                i++;
                while(t-->0){
                    ans+=str;
                }
            }
        }
        return ans;
        
    }
    string decodeString(string s) {
        stack<char> st;
        // string ans="";
        int i=0;
        
        return help(s, i);




        // return ans;
    }
};