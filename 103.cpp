// Binary Tree Zigzag Level Order Traversal
#include<bits/stdc++.h>
using namespace std;
//Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> v;
        vector<int> vec;
        bool lefttoright=true;
        stack<TreeNode*> currlevel, nextlevel;
        if(root==NULL)
            return v;
        currlevel.push(root);
        while(!currlevel.empty()){
            TreeNode* temp=currlevel.top();
            vec.push_back(temp->val);
            currlevel.pop();
            if(lefttoright){
                if(temp->left)
                    nextlevel.push(temp->left);
                if(temp->right)
                    nextlevel.push(temp->right);
            }
            else{
                 if(temp->right)
                    nextlevel.push(temp->right);
                 if(temp->left)
                    nextlevel.push(temp->left);
            }
            
            if(currlevel.empty()){
                v.push_back(vec);
                vec.clear();
                lefttoright=!lefttoright;
                swap(currlevel, nextlevel);
            }
        }
        return v;
    }
};