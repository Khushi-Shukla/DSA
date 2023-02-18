// Invert Binary Tree
// Definition for a binary tree node.
#include<bits/stdc++.h>
using namespace std;
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
    void help(TreeNode* root){
          if(root==NULL)
              return;
        if(root->right && root->left){
            TreeNode* temp=root->right;
            root->right=root->left;
            root->left=temp;
            help(root->right);
            help(root->left);
        }
        else if(root->right){
            root->left=root->right;
            root->right=NULL;
            help(root->left);
        }
        else if(root->left){
            root->right=root->left;
            root->left=NULL;
            help(root->right);
        }
        else{
            return;
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;

        help(root);
        return root;
    }
};