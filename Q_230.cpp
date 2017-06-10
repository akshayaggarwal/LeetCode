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

    vector<int> vec;

    void fillvec(TreeNode* root)
    {
        if(root == NULL)
            return;
            
        if(root->left == NULL && root->right == NULL){
            vec.push_back(root->val);
            return;
        }
        
        if(root->left != NULL)
            fillvec(root->left);
        
        vec.push_back(root->val);
        
        if(root->right != NULL)
            fillvec(root->right);
        
        return;
    }

    int kthSmallest(TreeNode* root, int k) {
        
        fillvec(root);
        
        sort(vec.begin(),vec.end());
        
        return vec[k-1];

    }
};
