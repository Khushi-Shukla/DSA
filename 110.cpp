/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// LeetCode 110. Balanced Binary Tree

#include<bits/stdc++.h>
#include<math.h>
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
    int getHeight(TreeNode* root){
        if(!root) 
            return 0;
        if(root->right && root->left){
            return 1+max(getHeight(root->right),getHeight(root->left));
        }
        else if(root->right){
            return 1+getHeight(root->right);
        }
        return 1+getHeight(root->left);
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        // if(!root->left && !root->right) return true;
        int h=getHeight(root->right)-getHeight(root->left);
         if(h==0 || h==1 || h==-1){
            if(root->left && root->right){
                return isBalanced(root->left) && isBalanced(root->right);
             }
            else if(root->left){
                return isBalanced(root->left);
            }
            else return isBalanced(root->right);
         }

     return false;
  }
};

int main(){
    Solution s;
    TreeNode *node=new TreeNode(4);
    node->left=new TreeNode(6);
    node->right=new TreeNode(1);
    cout<<s.isBalanced(node);
    return 0;
}