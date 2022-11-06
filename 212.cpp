// Word Search II
#include<bits/stdc++.h>
using namespace std;

struct Trie{
    public:
    Trie *child[26];
    bool isEnd;
    string word;
    
    Trie(){
        isEnd = false;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};

class Solution{
    vector<string> res;
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};
    Trie* trie = new Trie();

    public:
    void insert(string& s){
        Trie* tnode = trie;
        for(int i=0;i<s.size();i++){
            int idx = s[i] - 'a';
            if(tnode->child[idx]==NULL){
                tnode->child[idx] = new Trie();
            }
            
            tnode = tnode->child[idx];
            
        }

        tnode->isEnd = true;
        tnode->word = s;

        // trie = tnode;
    }
    bool search(string s){
        Trie* tnode = trie;
        for(int i=0;i<s.size();i++){
            int idx = s[i] - 'a';
            if(tnode->child[idx]==NULL){
                return false;
            }
        }
        return tnode->isEnd;
    }
    void dfs(vector<vector<char>>& grid, int n, int m, int i, int j, Trie* root){

        if(i<0 || j<0 || i>=n || j>=m || grid[i][j] == '#') return;

        int idx = grid[i][j]-'a';
        
        if(root->child[idx] == NULL) return;

        root = root->child[idx];

        if(root->isEnd){
            res.push_back(root->word);
            root->isEnd = false;
        }

        char val = grid[i][j];
        grid[i][j] = '#';

        for(int k=0;k<4;k++){
            int new_i = i+dx[k];
            int new_y = j+dy[k];
            dfs(grid, n, m, new_i, new_y, root);
        }

        grid[i][j] = val;

    }

    vector<string> findWords(vector<vector<char>>& grid, vector<string>& words) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<words.size();i++){
            insert(words[i]);
        }
        // cout<<search("oath");

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(grid, n, m, i, j, trie);
            }
        }

        return res;
    }

};

int main(){
    vector<vector<char>> v= {{'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}};
    vector<string> words = {"oath","pea","eat","rain"};
    Solution s;
    vector<string> ans=s.findWords(v, words);
    for(auto word:ans){
        cout<<word<<"\n";
    }
    return 0;
}