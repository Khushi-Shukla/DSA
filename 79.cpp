#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ans= false;
    vector<int> dx={-1, 0, 1, 0};
    vector<int> dy={0, 1, 0, -1};
    void dfs(vector<vector<char>>& board, int i, int j, string word, int n, int m, int idx){
        if(idx==word.size()){
            ans=true;
            return;
        }
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='#'){
            return;
        }
        if(board[i][j]!=word[idx]) return;
        
        // temp+=board[i][j];
        char t=board[i][j];
        
        board[i][j]='#';
        
        for(int k=0;k<4;k++){
            int new_i=i+dx[k];
            int new_j=j+dy[k];
            dfs(board, new_i, new_j, word, n, m, idx+1);
        }
        board[i][j]=t;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();

        string temp="";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(board, i, j, word, n, m, 0);
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    cout<<s.exist(board, word);
    return 0;
}