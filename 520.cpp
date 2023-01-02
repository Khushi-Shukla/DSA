// Detect Capital
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool cap;
        if(word[0]>=65 && word[0]<=90)
            cap=true;
        else
            cap=false;
        
        for(int i=1;i<word.size();i++){
            if(word[i]>=97 && word[i]<=122 && i==1) cap=false;
            if(cap && word[i]>=65 && word[i]<=90) cap=true;
            if(!cap && word[i]>=65 && word[i]<=90) return false;
            if(cap && word[i]>=97 && word[i]<=122) return false;
        }
        return true;
    }
};