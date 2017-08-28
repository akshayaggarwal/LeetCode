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
    
     int sum;
    Solution(){
        sum = 0;
    }
    
     void find_path(TreeNode *root, vector<int> combi){
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL){
            combi.push_back(root->val);
            int ret = 0;
            for(int i=0;i<combi.size();i++){
                ret = ret*10 + combi[i];        
            }
            
            sum += ret;
        }
        else{
           combi.push_back(root->val);
           find_path(root->left,combi);
           find_path(root->right,combi);
        }
    
    }
    
    int sumNumbers(TreeNode* root) {
       vector<int> combi;
       find_path(root,combi);
       return sum;
    }
};
