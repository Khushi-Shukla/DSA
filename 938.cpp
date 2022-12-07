// Range Sum of BST
#include<bits/stdc++.h>
using namespace std;
/*Definition for a binary tree node*/
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
    int sum=0;
public:
    void traverse(TreeNode* root, int low, int high){
        if(!root) return;
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
        traverse(root->left, low, high);
        traverse(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        traverse(root, low, high);
        return sum;
    }
};