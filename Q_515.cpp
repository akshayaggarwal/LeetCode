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
    
    void findlarg(TreeNode* root,int level){
        if(root == NULL)
            return;
        if(mymap.find(level) == mymap.end())
            mymap[level] = root->val;
        else if(root->val > mymap[level])
            mymap[level] = root->val;
        findlarg(root->left,level+1);
        findlarg(root->right,level+1);
    }
    
    vector<int> largestValues(TreeNode* root) {
        findlarg(root,0);
        vector<int> ret;
        map<int,int>::iterator it = mymap.begin();
        while(it != mymap.end())
            ret.push_back(((it++)->second));
        return ret;
    }
};
