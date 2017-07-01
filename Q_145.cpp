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
    
    vector<int> myvec;
    
    void stor_vec(TreeNode *root){
        
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL){
            myvec.push_back(root->val);
            return;
        }
        
        stor_vec(root->left);
        stor_vec(root->right);
                
        myvec.push_back(root->val);
            return;
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        stor_vec(root);
        return myvec;
    }
};
