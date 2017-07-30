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
    
    int ret = 0;
    
    void maxlen(TreeNode *root,TreeNode*parent,int len){
        if(root == NULL)
            return;
        if(parent == NULL){
            
            maxlen(root->left,root,1);
            maxlen(root->right,root,1);
            ret = max(1,ret);
            return;
        }
        if(root->val == parent->val+1)
            len = len + 1;
        else
            len = 1;
        ret = max(len,ret);
        
         maxlen(root->left,root,len);
         maxlen(root->right,root,len);
    }
    
    int longestConsecutive(TreeNode* root) {
            maxlen(root,NULL,0);
            return ret;
    }
};
