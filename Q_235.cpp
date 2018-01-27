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
    
    TreeNode* ret=NULL;
    
    void lca(TreeNode* root, TreeNode* pnode, TreeNode* qnode){
        if(root==NULL)
            return;
        
        if(root==pnode || root==qnode){
            ret=root;
            return;
        }
        if(root->val > pnode->val && root->val < qnode->val){
            ret=root;
            return;
        }
        if(root->val > qnode->val)
            lca(root->left,pnode,qnode);
        else
            lca(root->right,pnode,qnode);
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        if(p==q)
            return p;
        if(p->val<q->val)
            lca(root,p,q);
        else
            lca(root,q,p);
        return ret;
    }
};
