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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
         if(root == NULL)
            return NULL;
        
         if(root == p || root == q)
            return root;

         if(root->left == NULL && root->right == NULL)
            return NULL;
         
         TreeNode *temp1 = NULL,*temp2 = NULL;
         
         if(root->left != NULL){
             temp1 = lowestCommonAncestor(root->left,p,q);
         }    
         
         if(root->right != NULL){
             temp2 = lowestCommonAncestor(root->right,p,q);
         }    
        
         if(temp1==NULL && temp2!=NULL){
                return temp2;
         }
         
         if(temp1!=NULL && temp2==NULL){
                return temp1;
         }
            
         if(temp1!=NULL && temp2!=NULL)
            return root;
            
         return NULL;
        
    }
};
