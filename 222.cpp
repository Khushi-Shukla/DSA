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
    
    int helper (TreeNode *root){        
        if (root == nullptr)
            return 0;
        
        int no_of_left_nodes = helper (root -> left);
        int no_of_right_nodes = helper (root -> right);
        
        return 1 + no_of_left_nodes + no_of_right_nodes;
    }
    int countNodes(TreeNode* root) {
        return helper (root);
    }
};
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     Solution s;
// }