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
    
    void inorder(TreeNode *root){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            myvec.push_back(root->val);
            return;
        }
        inorder(root->left);
        myvec.push_back(root->val);
        inorder(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;
        int i;
        inorder(root);
        for(i=1;i<myvec.size();i++)
            if(myvec[i]<=myvec[i-1])
                return false;
        
        return true;
    }
};
