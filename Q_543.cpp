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

    int findpath(TreeNode* node,int val){
        if(node==NULL)
            return val;
        if(node->left==NULL && node->right ==NULL)
            return val;
        return max(findpath(node->right,val+1),findpath(node->left,val+1));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 0;
        
        int a,a1=0,a2=0,b=0,c=0,count=0;
        
        if(root->left!=NULL){
            a2=findpath(root->left,1);
            b=diameterOfBinaryTree(root->left);
        }
        if(root->right!=NULL){
            a1=findpath(root->right,1);
            c=diameterOfBinaryTree(root->right);
        }
        a=a1+a2;
        return max(a,max(b,c));
    }
};
