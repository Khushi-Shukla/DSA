// Find the Index of the First Occurrence in a String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        if(haystack.find(needle, i)!=string::npos)
            return haystack.find(needle, i);
        else
            return -1;
    }
};
