/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    vector<int> ret;
    
    void fill(TreeNode *root){
        
        if(root == NULL)
            return;
        
        ret.push_back(root->val);
        
        fill(root->left);
        fill(root->right);
        
        return;
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        fill(root);
        return ret;
    }
};
