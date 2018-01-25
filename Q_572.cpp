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
    
    bool check_subtree(TreeNode*s, TreeNode* t){
        if(s==NULL && t==NULL)
            return true;
        if(s==NULL && t!=NULL)
            return false;
        if(s!=NULL && t==NULL)
            return false;
        if(s->val!=t->val)
            return false;
        return check_subtree(s->left, t->left) & check_subtree(s->right, t->right);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==NULL && t==NULL)
            return true;
        if(s==NULL && t!=NULL)
            return false;
        if(s!=NULL && t==NULL)
            return false;
        bool b;
        if(s->val==t->val)
            b=check_subtree(s,t);
        if(b==true)
            return b;
        else 
            return isSubtree(s->left,t)|isSubtree(s->right,t);
    }
};
