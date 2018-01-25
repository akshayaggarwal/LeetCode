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
    void map_fill(TreeNode* root, int ht){
        if(root==NULL)
            return;
        if(mymap.find(ht)==mymap.end())
            mymap[ht]=root->val;
        map_fill(root->left,ht+1);
        map_fill(root->right,ht+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL)
            return -1;
        map_fill(root,0);
        map<int,int>::iterator it=mymap.end();
        it--;
        return it->second;
    }
};
