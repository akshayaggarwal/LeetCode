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
    
    map<int,vector<int>> mymap;
    
    void fillmap(TreeNode* root,int level){
        if(root == NULL)
            return;
        mymap[level].push_back(root->val);
        fillmap(root->left,level+1);
        fillmap(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        fillmap(root,0);
        vector<vector<int>> ret;
        map<int,vector<int>>::iterator it = mymap.begin();
        while(it!=mymap.end()){
            ret.push_back(it->second);  
            it++;
        }
        return ret;
    }
};
