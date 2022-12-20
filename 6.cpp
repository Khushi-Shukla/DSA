// Zigzag Conversion
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int sum=0, cols=0;
        int alt=0;
        if(numRows==1) return s;
        // return "";
        while(sum<s.size()){            
            alt==0?sum+=numRows:sum+=numRows-2;
            if(alt==1 && numRows==2) sum+=1;
            if(alt==0){
                cols++;
            }
            else{
                cols+=numRows-2;
                if(numRows==2)
                    cols++;
            }
            alt==0?alt=1:alt=0;
            
        }
        // cout<<cols;
        vector<vector<char>> ansArr(numRows, vector<char>(cols));
        int i=0,  x=0, y=0, diag=0;
        alt=0;
        while(i<s.size()){
            char curr = s[i];
            if(alt<numRows){
                ansArr[x][y]=curr;
                x++;
                // y++;
                alt++;
            }
            else if(diag<numRows-2){
                // if(diag==0){
                diag==0?x-=2:x--;
                y++;
                // }
                ansArr[x][y]=curr;       
                diag++;
                // x--;
            }
            else{
                if(diag==0) x--;
                x--;
                y++;
                alt=0;
                i--;
                diag=0;
                
            }
            i++;
        }
        string ans="";
        for(auto a: ansArr){
            for(auto b:a){
                if(b!=NULL)
                    ans+=b;
                // cout<<b<<"     ";
            }
            // cout<<"\n";
        }
        // cout<<"\n";
        // cout<<"\n";
        // cout<<"\n";
        return ans;
    }
};