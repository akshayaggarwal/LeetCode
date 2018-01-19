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
    int n;
    
    void fillvec(TreeNode* node){
        if(node==NULL||myvec.size()>=n)
            return;
        if(node->left==NULL && node->right==NULL){
            myvec.push_back(node->val);
            return;
        }
            
        fillvec(node->left);
        myvec.push_back(node->val);
        if(myvec.size()>=n)
            return;
        fillvec(node->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        n=k;
        fillvec(root);
        return myvec[k-1];
    }
};
