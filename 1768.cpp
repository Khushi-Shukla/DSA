// Merge Strings Alternately
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int n1 = word1.size();
        int n2 = word2.size();
        string ans="";
        int ctr=0;
        while(i< n1 && j< n2){
            if(ctr==0){
                ctr = 1;
                ans+=word1[i];
                i++;
            }
            else{
                ctr = 0;
                ans+=word2[j];
                j++;
            }
        }
        while(i< n1){
           ans+=word1[i];
           i++;
        }
        while(j< n2){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};