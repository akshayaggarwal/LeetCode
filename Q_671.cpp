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
    set<int> myset;
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL)
            return -1;
        myset.insert(root->val);
        if(root->left != NULL){
            myset.insert(root->left->val);
            myset.insert(root->right->val);
        }

        findSecondMinimumValue(root->left);
        findSecondMinimumValue(root->right);
        set<int>::iterator it = myset.begin();
        if(myset.size()==1)
            return -1;
        else{
            it++;
            return *it;
        }
        
    }
};
