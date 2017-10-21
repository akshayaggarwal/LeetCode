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
    
    map<int,int> mymap;
    
    void fillmap(TreeNode *root,int level){
        if(root == NULL)
            return;
        
        if(mymap.find(level)==mymap.end())
            mymap[level] = root->val;
        fillmap(root->right,level+1);
        fillmap(root->left,level+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ret;
        fillmap(root,0);
        map<int,int>::iterator it = mymap.begin();
        while(it != mymap.end()){
            ret.push_back(it->second);
            it++;
        }
        return ret;
    }
};
