//valid sudoku
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<string, int> mp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char n=board[i][j];
                if(n!='.'){
                    string a="r"+to_string(i),b="c"+to_string(j);
                    string c="b"+to_string(i/3)+"_"+to_string(j/3);
                    a+=n; b+=n; c+=n;
                    
                    if(mp[a] || mp[b] || mp[c])
                        return false;
                    else{
                        mp[a]++;
                        mp[b]++;
                        mp[c]++;
                    }
                  
                }
            }
        }
        return true;
        
    }
};