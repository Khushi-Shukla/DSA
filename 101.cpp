// Symmetric Tree
// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool compare(TreeNode* r1, TreeNode* r2){
     if(r1==NULL && r2==NULL) return true;
     if(r1==NULL || r2==NULL) return false;
     return r1->val==r2->val && compare(r1->right, r2->left) && compare(r2->right, r1->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return true;
        return (compare(root->right, root->left));
    }
};