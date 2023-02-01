// Count and Say
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string say(string s){
        int n=s.length();
        if(n==1)
            return "1"+s;
        int i=0;
        string res="";
        while(i<n){
            int count=1;
            int j=i+1;
            char num=s[i];
            while(s[i]==s[j]){
                i++;
                j++;
                count++;
            }
            res+=to_string(count)+num;
            i++;
        }
        return res;
    }

    string countAndSay(int n) {
        
        if(n==1)
            return "1";
        if(n==2)
            return "11";
         if(n==3)
            return "21"; 
        if(n==4)
            return "1211";
        return say(countAndSay(n-1));
    }
};