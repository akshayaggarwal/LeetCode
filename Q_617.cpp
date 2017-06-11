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

    void mergetree(TreeNode *root1,TreeNode *root2){
        
        if(root1 == NULL && root2 == NULL)
            return;
        
        if(root1 != NULL && root2 != NULL)
            root1->val = root1->val+root2->val;
            
        
        
        if(root2->left != NULL){
            
            if(root1->left == NULL)
            {
            TreeNode *rootnew = new TreeNode(0);
            root1->left = rootnew;
            //root1->val = root2->val;
            }
            
            mergetree(root1->left,root2->left);
            }
        
        
        if(root2->right != NULL){
            
            if(root1->right == NULL)
            {
            TreeNode *rootnew = new TreeNode(0);
            root1->right = rootnew;
            //root1->val = root2->val;
            }
            
            mergetree(root1->right,root2->right);
            }
        return;
    }

    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        
        if(t1 == NULL && t2 != NULL)
            return t2;
            
        if(t2 == NULL && t1 != NULL)
            return t1;    
        
        TreeNode *temp;
        temp = t1;
        
        mergetree(t1,t2);
        
        return temp;
        
    }
};
