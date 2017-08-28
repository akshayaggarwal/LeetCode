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
    
    vector<vector<int>> ret;
    
    void find_path(TreeNode *root,int sum, vector<int> combi,int cursum){
        if(root == NULL)
            return;
        
        if(root->val+cursum == sum && root->left == NULL && root->right == NULL){
            combi.push_back(root->val);
            ret.push_back(combi);
        }
        else{
           combi.push_back(root->val);
           find_path(root->left,sum,combi,cursum+root->val);
           find_path(root->right,sum,combi,cursum+root->val);
        }
    
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> combi;
        find_path(root,sum,combi,0);    
        return ret;
    }
};
