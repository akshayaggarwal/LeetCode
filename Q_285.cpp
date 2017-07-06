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
    
    vector<TreeNode*> ret;
    void inorder(TreeNode* root, TreeNode*p){
            
        if(root == NULL)
            return;
        
        inorder(root->left,p);
        ret.push_back(root);
        inorder(root->right,p);
    }
    
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        
        inorder(root,p);

        for(int i=0;i<ret.size();i++){
            
            if(ret[i] == p && i<(ret.size()-1)){
                return ret[i+1];
            }
            else if(ret[i] == p && i==ret.size()-1)
                return NULL;
        }
    }
};
