// Longest Uncommon Subsequence I
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b){
            return -1;
        }
      
        return a.size()>b.size()?a.size():b.size();
    }
};