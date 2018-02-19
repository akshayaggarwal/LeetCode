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
    int prev,flag=0;
    int ret=INT_MAX;
    void inorder(TreeNode *root){
        if(root==NULL||ret==0)
          return;
        if(root->left!=NULL)
           inorder(root->left);
        if(flag==0){
            prev=root->val;
            flag=1;
        }
        else{
            if(root->val-prev<ret)
                ret=root->val-prev;
            prev=root->val;
        }
        if(root->right!=NULL)
           inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return ret;
    }
};
