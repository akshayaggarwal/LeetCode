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

    void inserting_node(TreeNode* root,int ht,int dpth,int valu){
        
        if(root == NULL)
            return;
        
        if(dpth == ht){
            
            TreeNode *node1 = new TreeNode(0);
            TreeNode *node2 = new TreeNode(0);
            
            node1->val = valu;
            node2->val = valu;
            
            node1->left = root->left;
            node2->right = root->right;
            
            root->left = node1;
            root->right = node2;
            
            return;
            
        }
        else{
            inserting_node(root->left,ht+1,dpth,valu);
            inserting_node(root->right,ht+1,dpth,valu);
        }
    }

    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        
        if(d == 1){
        
            TreeNode *node1 = new TreeNode(0);
            node1->val = v;
            node1->left = root;
            node1->right = NULL;
            return node1;
            
        }
        
        inserting_node(root,2,d,v);
        return root;
    }
};
