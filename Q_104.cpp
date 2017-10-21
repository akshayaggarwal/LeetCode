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
    int ht;
    void max_depth(TreeNode *root,int level){
        if(root == NULL)
            return;
        if(ht < level)
            ht = level;
        max_depth(root->left,level+1);
        max_depth(root->right,level+1);
    }
    
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        ht = 0;
        max_depth(root,1);
        return ht;
    }
};
