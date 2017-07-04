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
    
    vector<int> myvec;
    
    void fill_vec(TreeNode* root){
        
        if(root == NULL)
            return;
        
        fill_vec(root->left);
        myvec.push_back(root->val);
        fill_vec(root->right);
        
    }
    
    bool isValidBST(TreeNode* root) {
       
       fill_vec(root);
       if(myvec.size()<=1)
            return true;
        
       for(int i=1;i<myvec.size();i++){
            if(myvec[i]<=myvec[i-1])
                return false;
       }
        
        return true;
    }
};
